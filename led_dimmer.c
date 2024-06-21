/*
    Project name : ESP8266 led dimmer
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-led-dimmer
*/

// Define LED pin
const int ledPin = D1; // GPIO pin D1 on NodeMCU

// Variables
int brightness = 0; // LED brightness level (0 to 1023)

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // Increase brightness
  for (brightness = 0; brightness <= 1023; brightness += 5) {
    analogWrite(ledPin, brightness); // Set LED brightness using PWM
    delay(10); // Small delay for smooth transition
  }

  // Decrease brightness
  for (brightness = 1023; brightness >= 0; brightness -= 5) {
    analogWrite(ledPin, brightness); // Set LED brightness using PWM
    delay(10); // Small delay for smooth transition
  }
}
