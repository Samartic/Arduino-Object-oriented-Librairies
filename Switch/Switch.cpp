#include "switch.h"

void Switch::set(uint8_t Dpin){
  pin = Dpin;
}

void Switch::begin(){
  pinMode(pin, INPUT);
}

void Switch::update(){
  ON = (analogRead(pin) == LOW)? 0: 1;
  OFF =(analogRead(pin) == HIGH)? 0: 1;
}
