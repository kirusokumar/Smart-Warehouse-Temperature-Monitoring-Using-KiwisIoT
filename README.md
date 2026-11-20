# Smart Warehouse Temperature Monitoring Using KiwisIoT

## Project Overview

This project monitors warehouse temperature using a DS18B20 digital temperature sensor connected to a NodeMCU ESP8266. The controller collects temperature readings, checks them against a configured temperature threshold, and sends the data to KiwisIoT through Wi-Fi.

The cloud dashboard allows users to remotely monitor warehouse temperature and identify abnormal temperature conditions.

## Hardware Components

- NodeMCU ESP8266
- DS18B20 Temperature Sensor
- 4.7kΩ Pull-up Resistor
- Jumper Wires
- USB Power Supply

## Circuit Connections

| DS18B20 Sensor | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DATA | D2 (GPIO4) |

A 4.7kΩ pull-up resistor is connected between DATA and 3.3V.


## KiwisIoT Dashboard

| Channel | Data |
|---|---|
| Channel 0 | Warehouse Temperature (°C) |
| Channel 1 | Temperature Status |

The dashboard can display temperature using gauge, numeric, chart, and label widgets.

## Software

- Arduino IDE
- ESP8266 Board Package
- OneWire Library
- DallasTemperature Library
- KiwisIoT Arduino Library

## Working Principle

The DS18B20 sensor measures warehouse temperature and sends the reading to the NodeMCU ESP8266. The controller evaluates the temperature against the configured threshold and determines the monitoring status.

The temperature and status information are transmitted to KiwisIoT through Wi-Fi, where users can remotely monitor warehouse temperature.

## Project Blog

Read the complete project tutorial on Hackster.io:

[Smart Warehouse Temperature Monitoring Using KiwisIoT](https://www.hackster.io/kirusokumar/smart-warehouse-temperature-monitoring-using-kiwisiot-b09a90)

## KiwisIoT Resources

- **Website:** https://www.kiwisiot.in/
- **Arduino Library:** https://github.com/Kiwistron/KiwisIoT
- **Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/

## Author

**Kirusokumar**

---

If you find this project useful, explore more IoT projects using KiwisIoT.
