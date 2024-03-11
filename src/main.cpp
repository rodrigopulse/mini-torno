#include <Arduino.h>

const int stepPin = D7;
const int dirPin = D8;
const int potentiometer = A0;

int speed = 0;

const int minSpeed = 2600;
const int maxSpeed = 280;

void setup()
{
  pinMode (stepPin, OUTPUT);
  pinMode (dirPin, OUTPUT);
  pinMode (potentiometer, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(dirPin, HIGH);
  int potenciometerValue = analogRead(potentiometer);

  speed = map(potenciometerValue, 0, 1023, minSpeed, maxSpeed);
  Serial.print(speed);
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(speed);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(speed);
  }
  Serial.print("Velocidade: ");
  Serial.println(speed);
}