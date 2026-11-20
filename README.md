# Smart Warehouse Temperature Monitoring Using KiwisIoT

A simple IoT-based warehouse temperature monitoring system using **NodeMCU ESP8266** and **DS18B20** to monitor temperature in real time and visualize readings through the KiwisIoT cloud dashboard.

## About the Project

Warehouse temperature monitoring is important for protecting stored products from unwanted temperature variations. This project uses a DS18B20 temperature sensor connected to a NodeMCU ESP8266 to monitor the warehouse environment.

The ESP8266 collects temperature readings, checks the configured temperature limit, and sends the data to KiwisIoT through Wi-Fi. The dashboard helps users view temperature readings and monitoring status remotely.

## Hardware Components

- NodeMCU ESP8266
- DS18B20 Temperature Sensor
- 4.7kΩ Pull-up Resistor
- Jumper Wires
- USB Power Supply

## Circuit Connections

| DS18B20 | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DATA | D4 |

A 4.7kΩ pull-up resistor is connected between DATA and 3.3V.

## Features

- Real-time temperature monitoring
- Digital temperature sensing using DS18B20
- Temperature threshold monitoring
- Wi-Fi connectivity using ESP8266
- Cloud-based monitoring
- Remote temperature visualization

## KiwisIoT Dashboard

The sensor data is transmitted to KiwisIoT using separate channels.

| Channel | Data |
|---|---|
| Channel 0 | Warehouse Temperature (°C) |
| Channel 1 | Temperature Status |

Temperature readings can be visualized using gauges, numeric widgets, charts, and labels.

## Software Used

- Arduino IDE
- ESP8266 Board Package
- OneWire Library
- DallasTemperature Library
- KiwisIoT Arduino Library

## Working Principle

The DS18B20 measures the warehouse temperature and sends the digital reading to the NodeMCU ESP8266. The controller evaluates the temperature against the configured threshold and determines the monitoring status.

The ESP8266 sends the temperature and status information to KiwisIoT through Wi-Fi, allowing users to monitor warehouse conditions remotely.

## Project Tutorial

You can explore the complete project, circuit connections, and implementation details here:

[Smart Warehouse Temperature Monitoring Using KiwisIoT – Hackster.io](https://www.hackster.io/kirusokumar/smart-warehouse-temperature-monitoring-using-kiwisiot-b09a90)

## Explore KiwisIoT

I used **KiwisIoT** for cloud connectivity and real-time sensor visualization in this project.

🌐 **KiwisIoT Platform:** https://www.kiwisiot.in/

📚 **KiwisIoT Arduino Library:** https://github.com/Kiwistron/KiwisIoT

💡 **KiwisIoT Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

These resources are useful for exploring the platform, understanding the Arduino library, and learning how to build more IoT projects.

## About the Author

I'm an IoT enthusiast who enjoys building practical projects using microcontrollers, sensors, cloud platforms, and real-world automation ideas.

I share my projects to document what I build, what I learn, and to make it easier for others who are exploring IoT to discover similar ideas.

If you find this project interesting, feel free to explore it, adapt it to your own ideas, or share your feedback. If you're looking for an IoT platform to experiment with sensor dashboards and cloud connectivity, you can also check out KiwisIoT and its library.

---

*Built with curiosity, sensors, and IoT.*
