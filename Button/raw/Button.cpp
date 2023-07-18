#include "Button.h"
#include <Arduino.h>

Button::Button(uint8_t Dpin = -1){
  pin = Dpin;
}

void Button::begin(){
  pinMode(pin, INPUT_PULLUP);
  clicks = 0;
}

void Button::update(){
  ispressed = (digitalRead(pin) == LOW);
  isengage = (ispressed % 2 != 0);
  nbclicks = (ispressed) ? clicks++: clicks;
  
}
void Button::set(uint8_t Dpin){
  pin = Dpin;
}
