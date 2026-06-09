# fire-ditection-sensor-
🔥 Fire Detection Sensor System

A simple fire detection system using a flame sensor and microcontroller (Arduino/ESP32) to detect fire and trigger alarms in real time.

Features
Detects flames using an IR flame sensor
Real-time monitoring
Audible alarm using buzzer
Visual alert using LED
Easy integration with Arduino or ESP32
Low-cost and beginner-friendly project
Components Required
Arduino Uno / ESP32
Flame Sensor Module
Buzzer
LED
Resistors
Jumper Wires
Breadboard
Working Principle

The flame sensor detects infrared light emitted by fire. When the detected signal exceeds a predefined threshold, the microcontroller activates:

Buzzer alarm
Warning LED
Optional notification system (IoT version)

Flame sensors typically detect infrared wavelengths associated with flames and are commonly used in fire detection and firefighting robot projects.

Circuit Connections
Flame Sensor	Arduino
VCC	5V
GND	GND
OUT	Digital Pin 2
Buzzer	Arduino
+	Pin 8
-	GND
LED	Arduino
Anode	Pin 13
Cathode	GND (through resistor)
