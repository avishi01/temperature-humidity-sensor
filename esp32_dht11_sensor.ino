#include "DHT.h"

#define DHTPIN 4        // GPIO where DATA is connected
#define DHTTYPE DHT11  // Sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("DHT11 Test");

  dht.begin();
}

void loop() {
  delay(2000);  // wait 2 seconds

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %  ");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
}
