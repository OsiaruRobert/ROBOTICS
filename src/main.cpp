#include <Arduino.h>

const int LDR_PIN = analogRead(A0);
const int LED = 8;

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int light = analogRead(LDR_PIN);

  if (light < 300)
  {
    digitalWrite(LED, HIGH);
    Serial.println("high");
  }
  else if (light < 150)
  {
    Serial.println("low");

    digitalWrite(LED, LOW);
  }
  else
  {
    Serial.println("low");

    digitalWrite(LED, LOW);
  }
  delay(200);
}