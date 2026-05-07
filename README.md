# ESP32 Temperature & Humidity Monitor
A simple IoT project that uses an ESP32 and DHT11 sensor to measure and display temperature and humidity in real time.

## Components
- ESP32
- DHT11 sensor
- Jumper wires
- Breadboard
- USB cable

## How it works
The DHT11 sensor collects temperature and humidity data and sends it to the ESP32 via a GPIO pin. The ESP32 reads the data and displays it on the Serial Monitor.

## Setup
- Install Arduino IDE
- Add ESP32 board support
- Install DHT sensor library
- Upload the code to ESP32
- Open Serial Monitor (115200 baud)

## Output
- Temperature in °C
- Humidity in %
- Updates every 2 seconds

## Code
Arduino code is included in this repo.

## Result
ESP32 successfully reads and displays live temperature and humidity data.
