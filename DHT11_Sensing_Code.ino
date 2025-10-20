#include "DHT.h"

#define DHTPIN 2        // DHT11 sensor connected to digital pin 2
#define DHTTYPE DHT11   // DHT 11 sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Temperature and Humidity Monitoring Started");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();  // Celsius

  // Check if any reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C  |  Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);  // Wait 2 seconds between readings
}
