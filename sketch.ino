#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define BTN_GREEN 18
#define BTN_RED   19
#define BTN_BLUE  23

#define LED_GREEN 25
#define LED_RED   26
#define LED_BLUE  27

#define BUZZER    33

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(BTN_GREEN, INPUT_PULLUP);
  pinMode(BTN_RED, INPUT_PULLUP);
  pinMode(BTN_BLUE, INPUT_PULLUP);

  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("ESP32 Control");
  lcd.setCursor(0, 1);
  lcd.print("System Ready");

  delay(2000);
  lcd.clear();
}

void loop() {

  bool greenPressed = !digitalRead(BTN_GREEN);
  bool redPressed   = !digitalRead(BTN_RED);
  bool bluePressed  = !digitalRead(BTN_BLUE);

  digitalWrite(LED_GREEN, greenPressed);
  digitalWrite(LED_RED, redPressed);
  digitalWrite(LED_BLUE, bluePressed);

  if (greenPressed) {
    tone(BUZZER, 1000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("GREEN BUTTON");
    lcd.setCursor(0, 1);
    lcd.print("LED ON");
  }

  else if (redPressed) {
    tone(BUZZER, 1500);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("RED BUTTON");
    lcd.setCursor(0, 1);
    lcd.print("LED ON");
  }

  else if (bluePressed) {
    tone(BUZZER, 2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("BLUE BUTTON");
    lcd.setCursor(0, 1);
    lcd.print("LED ON");
  }

  else {
    noTone(BUZZER);

    lcd.setCursor(0, 0);
    lcd.print("Waiting...    ");
    lcd.setCursor(0, 1);
    lcd.print("Press Button  ");
  }

  delay(1000);
}
