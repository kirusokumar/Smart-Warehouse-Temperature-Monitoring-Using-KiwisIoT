#include <OneWire.h>
#include <DallasTemperature.h>
#include <KiwisIoT.h>

// Wi-Fi credentials
const char* ssid = "Kiwis";
const char* pass = "Kiwis1234";
const char* topic = "dash_1795168794128";

// KiwisIoT
KiwisIoT kiwisiot(ssid, pass, topic);

// DS18B20 sensor
#define SENSOR_PIN D4

OneWire oneWire(SENSOR_PIN);
DallasTemperature sensors(&oneWire);

// Temperature threshold
const float TEMP_LIMIT = 30.0;

// Update interval
unsigned long lastSend = 0;
const unsigned long SEND_INTERVAL = 1000;

float warehouseTemperature = 0;
String temperatureStatus = "NORMAL";

void setup()
{
  Serial.begin(115200);

  sensors.begin();

  kiwisiot.begin();

  Serial.println("Warehouse Temperature Monitoring Started");
}

void loop()
{
  kiwisiot.run();

  if (millis() - lastSend >= SEND_INTERVAL)
  {
    lastSend = millis();

    sensors.requestTemperatures();

    warehouseTemperature =
      sensors.getTempCByIndex(0);

    // Sensor validation
    if (warehouseTemperature == DEVICE_DISCONNECTED_C)
    {
      Serial.println("DS18B20 Sensor Error");
      return;
    }

    // Temperature evaluation
    if (warehouseTemperature > TEMP_LIMIT)
    {
      temperatureStatus = "HIGH TEMPERATURE";
    }
    else
    {
      temperatureStatus = "NORMAL";
    }

    // Serial Monitor
    Serial.println("----------------------");

    Serial.print("Warehouse Temperature: ");
    Serial.print(warehouseTemperature);
    Serial.println(" C");

    Serial.print("Temperature Status: ");
    Serial.println(temperatureStatus);

    // Send data to KiwisIoT
    kiwisiot.send("0", String(warehouseTemperature, 2));

    kiwisiot.send("1", temperatureStatus);
  }
}
