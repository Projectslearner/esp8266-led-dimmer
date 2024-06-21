# ESP8266 LED Dimmer Project

#### Project Overview
This project demonstrates how to create a LED dimmer using an ESP8266 microcontroller. The brightness of an LED connected to GPIO pin D1 is adjusted smoothly using Pulse Width Modulation (PWM) to create a dimming effect.

#### Components Needed
- **ESP8266 Microcontroller**
- **LED**
- **Resistor (if necessary for the LED)**
- **Jumper Wires**
- **Power Supply**

#### Circuit Setup
1. **Connecting LED to ESP8266:**
   - Connect the cathode (short leg) of the LED to GPIO pin D1 (or any GPIO pin of your choice).
   - Connect the anode (long leg) of the LED to a current-limiting resistor (if required) and then to ground.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, observe the LED connected to pin D1.
   - The LED brightness will gradually increase and decrease in a smooth cycle.

#### Applications
- **Mood Lighting:** Control the ambiance of a room by adjusting LED brightness.
- **Visual Effects:** Create dynamic lighting effects in projects.
- **Learning PWM:** Understand PWM and analog control with microcontrollers.

#### Notes
- **LED Polarity:** Ensure the correct orientation of the LED (cathode to ground, anode to GPIO pin).
- **Resistor:** Use a resistor to limit current if the LED requires it to prevent damage.
- **PWM Control:** Adjust the brightness levels by modifying the PWM duty cycle in the code (`analogWrite()` function).

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 LED Dimmer](https://projectslearner.com/learn/esp8266-led-dimmer)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner