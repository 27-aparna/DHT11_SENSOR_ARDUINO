# DHT11_SENSOR_ARDUINO
DHT11 code for QA documentation activity.
# DHT11_SENSOR_ARDUINO





Temperature and Humidity Monitoring using DHT11 Sensor

Overview

This project reads temperature and humidity data using a DHT11 sensor and displays it on the Arduino Serial Monitor It demonstrates how to interface a digital sensor with Arduino and monitor environmental conditions in real time.



Hardware Components

 Arduino Uno (or compatible board)
 DHT11 Temperature and Humidity Sensor
 Jumper wires

Connections:

| DHT11 Pin | Arduino Pin |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| DATA      | D2          |

---

Software Requirements

Arduino IDE
DHT sensor library by Adafruit
Adafruit Unified Sensor library

Install both from **Sketch → Include Library → Manage Libraries...**

---

### **Code Description

1. Initializes the DHT11 sensor on digital pin 2.
2. Continuously reads temperature (°C) and humidity (%) every 2 seconds.
3. Prints results on the Serial Monitor.
4. Displays an error message if the sensor fails to respond.



Expected Serial Output

Temperature and Humidity Monitoring Started
Temperature: 28.00 °C  |  Humidity: 62.00 %
Temperature: 28.10 °C  |  Humidity: 61.80 %




QA and Issue Tracking

Example GitHub Issues to log:

1. Add Fahrenheit output conversion.
2. Include LED alert if humidity exceeds 80%.
3. Improve serial output formatting.



Learning Outcome

 Understood how to read sensor data using Arduino.
 Practiced QA logging and collaboration on GitHub.
 Learned how to document and manage embedded projects.
