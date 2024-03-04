#include <Arduino.h>

const int stepPin = D7;
const int dirPin = D8;

void setup()
{
  pinMode (stepPin, OUTPUT);
  pinMode (dirPin, OUTPUT);
}

void loop()
{
  digitalWrite(dirPin, HIGH);
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(700);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(700);
  }
}