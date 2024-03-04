#include <Arduino.h>

const int stepPin = D7;
const int dirPin = D8;
int speed = 700;

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
    delayMicroseconds(speed);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(speed);
  }
}