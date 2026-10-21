#include <Arduino.h>

const int GREEN = 8;
const int YELLOW = 9;
const int RED = 10;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  Serial.begin(9600);
  Serial.println("OSIARU TECH");
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(500);
  digitalWrite(RED, LOW);
  delay(500);

  digitalWrite(YELLOW, HIGH);
  delay(500);
  digitalWrite(YELLOW, LOW);
  delay(500);

  digitalWrite(GREEN, HIGH);
  delay(500);
  digitalWrite(GREEN, LOW);
  delay(500);

  int x = analogRead(A0);

  Serial.println(x);
  Serial.println("New Run");
}