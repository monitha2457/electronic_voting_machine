ESP32 Button Controlled LEDs with LCD and Buzzer
Project Overview

This project demonstrates a simple Embedded Systems and IoT application using an ESP32 microcontroller. Three push buttons control three LEDs, while a 16x2 I2C LCD displays the current system status. A buzzer provides audio feedback whenever a button is pressed.

Components Used
ESP32 DevKit V4
3 Push Buttons
3 LEDs (Green, Red, Blue)
3 × 220Ω Resistors
16x2 I2C LCD Display
Buzzer
Jumper Wires
Circuit Connections
Inputs
Component	ESP32 Pin
Green Button	GPIO 18
Red Button	GPIO 19
Blue Button	GPIO 23
Outputs
Component	ESP32 Pin
Green LED	GPIO 25
Red LED	GPIO 26
Blue LED	GPIO 27
Buzzer	GPIO 33
I2C LCD
LCD Pin	ESP32 Pin
SDA	GPIO 21
SCL	GPIO 22
VCC	5V
GND	GND
Working Principle
The ESP32 continuously monitors the state of the three push buttons.
When a button is pressed:
The corresponding LED turns ON.
The buzzer generates a tone.
The LCD displays the active button and LED status.
When no button is pressed:
All LEDs remain OFF.
The buzzer is silent.
The LCD displays a waiting message.
Features
Multiple button inputs
LED indication
LCD status display
Audio feedback using buzzer
Real-time user interaction
Easy to simulate in Wokwi
Software Used
Arduino IDE
Wokwi Simulator
Libraries Required
Wire.h
LiquidCrystal_I2C.h
Simulation

The project can be simulated using Wokwi by uploading the provided:

diagram.json
sketch.ino
Expected Output
Pressing the Green Button turns ON the Green LED.
Pressing the Red Button turns ON the Red LED.
Pressing the Blue Button turns ON the Blue LED.
LCD displays the current button status.
Buzzer sounds while a button is pressed.
Author

Monitha
