#include <Arduino.h>

const int BUTTON = 8;
const int LED = 2;

void setup()
{
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  Serial.begin("OSIARU MOTION");
}

void loop()
{
  bool pressed = (digitalRead(BUTTON) == HIGH);

  if (pressed)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }

  delay(500);
}