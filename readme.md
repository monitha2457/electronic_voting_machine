# Electronic Voting Machine

## Overview
A simple ESP32 project that uses three push buttons to control three LEDs. A 16x2 I2C LCD displays the current status, and a buzzer provides audio feedback when a button is pressed.

## Components
- ESP32 DevKit V4
- 3 Push Buttons
- 3 LEDs (Green, Red, Blue)
- 3 × 220Ω Resistors
- 16x2 I2C LCD
- Buzzer

## Features
- Button-controlled LEDs
- LCD status display
- Buzzer notification
- Real-time monitoring

## Pin Connections

| Component | GPIO Pin |
|-----------|----------|
| Green Button | 18 |
| Red Button | 19 |
| Blue Button | 23 |
| Green LED | 25 |
| Red LED | 26 |
| Blue LED | 27 |
| Buzzer | 33 |
| LCD SDA | 21 |
| LCD SCL | 22 |

## How It Works
- Press a button to turn ON its corresponding LED.
- The LCD displays the button status.
- The buzzer sounds when a button is pressed.
- When no button is pressed, the system waits for user input.

## Software
- Arduino IDE
- Wokwi Simulator

## Library Required
- LiquidCrystal_I2C

## Author
**Monitha**
**INTERN ID - CITS1656**
