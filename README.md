# Arduino Automatic Lighting System with PIR Motion Sensor

A simple, energy-saving home automation project that automatically turns lights on when motion is detected and off after a period of inactivity. Perfect for hallways, entryways, or closets!

## Features

*   Motion-activated light control.
*   Energy-efficient: light turns off when no one is present.
*   Easy to build for beginners.
*   Simulated and tested in Tinkercad.

## Components Used

*   **Arduino Uno R3** (The brain of the system)
*   **PIR Motion Sensor** (HC-SR501 recommended for real-world)
*   **Relay Module** (e.g., 5V Single Channel Relay Module)
*   **Light Bulb** (LED or incandescent, depends on your relay's capacity)
*   Breadboard (for prototyping)
*   Jumper Wires
*   5V Power Supply (for Arduino)

## Circuit Diagram & Wiring

Here's how to connect the components.

![Circuit Diagram](circuit_diagram.png)

*   **PIR Sensor to Arduino:**
    *   VCC (PIR) -> 5V (Arduino)
    *   GND (PIR) -> GND (Arduino)
    *   OUT (PIR) -> Digital Pin 2 (Arduino)
*   **Relay Module to Arduino:**
    *   VCC (Relay) -> 5V (Arduino)
    *   GND (Relay) -> GND (Arduino)
    *   IN (Relay) -> Digital Pin 5 (Arduino)
*   **Light Bulb & External Power Supply (through Relay):**
    *   Connect one side of the light bulb to the Live/Positive of your external power supply.
    *   Connect the Neutral/Negative of your external power supply to the **Common (COM)** pin of the Relay.
    *   Connect the other side of the light bulb to the **Normally Open (NO)** pin of the Relay.

**Interactive Tinkercad Simulation:**
You can explore the circuit and run the simulation directly in your browser here: 
https://www.tinkercad.com/things/5ggnVsAdmAc-automatic-lightning-system

## Arduino Code

The Arduino code (`automatic_light_system.ino`) monitors the PIR sensor's output and controls the relay module accordingly.

```cpp
// (Your Arduino C++ code goes here)
// Example:
// int pirPin = 2;   // PIR sensor connected to Digital Pin 2
// int bulbPin = 5;  // Relay/Light bulb connected to Digital Pin 5
//
// void setup() {
//   pinMode(pirPin, INPUT);
//   pinMode(bulbPin, OUTPUT);
//   // Serial.begin(9600); // Optional: for debugging
// }
//
// void loop() {
//   int motionState = digitalRead(pirPin); // Read PIR sensor state
//
//   if (motionState == HIGH) { // If motion is detected
//     digitalWrite(bulbPin, HIGH); // Turn light ON
//     // Serial.println("Motion detected! Light ON."); // Optional debugging
//     delay(200); // Keep light on for a short time to avoid flicker
//   } else { // No motion
//     digitalWrite(bulbPin, LOW); // Turn light OFF
//     // Serial.println("No motion. Light OFF."); // Optional debugging
//   }
// }
