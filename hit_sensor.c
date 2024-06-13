/*
    Project name : Hit sensor module Tap Sensor Module
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-hit-sensor-module-tap-sensor-module
*/

const int tapSensorPin = 2; // Digital pin connected to the tap sensor
unsigned long previousMillis = 0;  // Store the previous time
const long interval = 1000; // Delay interval

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  
  // Set tap sensor pin as input
  pinMode(tapSensorPin, INPUT);
}

void loop() {
  // Read the state of the tap sensor
  int tapState = digitalRead(tapSensorPin);
  
  // Check if tap is detected
  if (tapState == HIGH) {
    Serial.println("Tap detected!");
  }

  // Add a small delay before the next reading
  delay(100);
}
