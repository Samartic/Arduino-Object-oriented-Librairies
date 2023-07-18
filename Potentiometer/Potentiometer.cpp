#include "Potentiometer.h"
#include <Arduino.h>

Potentiometer::Potentiometer(uint8_t pin = -1){
}

void Potentiometer::begin(){
  pinMode(pin, INPUT);
}

void Potentiometer::update(){
  brute = analogRead(pin);
  mapped = map(brute, 0, 1023, -100, 100);
}

void Potentiometer::set(uint8_t Apin){
  pin = Apin;
}
