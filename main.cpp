 #include <Arduino.h> // <-- ADD THIS LINE FIRST TO FIX ALL ERRORS

// LM35 Temperature Sensor with Arduino

const int tempPin = A0;  // LM35 output connected to A0
float temperature;

void setup() {
  Serial.begin(9600);    // Start serial monitor
}

void loop() {
  int sensorValue = analogRead(tempPin); // Read analog value

  // Convert to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert voltage to temperature (LM35 gives 10mV per degree)
  temperature = voltage * 100;

  // Print temperature
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000); // 1 second delay
}