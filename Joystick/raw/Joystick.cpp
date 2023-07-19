#include "Joystick.h"
#include <Arduino.h>
#include "Potentiometer.h"

Joystick::Joystick(uint8_t Apinx = -1, uint8_t Apiny = -1, uint8_t Dpinsel = -1){
  checkLibraryAvailability("Button");
  checkLibraryAvailability("Potentiometer");
  x.set(Apinx);
  y.set(Apiny);
  sel;
}


void Joystick::set(uint8_t Apinx, uint8_t Apiny, uint8_t Dpinsel){
  x.set(Apinx);
  y.set(Apiny);
  sel.set(Dpinsel);
}

void Joystick::begin(){
  x.begin();
  y.begin();
  sel.begin();
}

void Joystick::update(){
  x.update();
  y.update();
  sel.update();
}
float Joystick::get_forces(){
  return (abs(x.mapped) >= abs(y.mapped)) ? abs(x.mapped) : abs(y.mapped); 
}

float Joystick::get_angle(){

  const long CONV = 180 / 3.14159265358979323846; // convert radian to degree

  if (x.mapped > 0 && y.mapped > 0){
    // first cadrant o = y, a = x.mapped
    return 90 - atan(y.mapped / x.mapped) * CONV;
  }
  else if (x.mapped > 0 && y.mapped < 0) {
    // a = x, y = o
    return 90 + atan(abs(y.mapped) / x.mapped) * CONV;
  }
  else if (x.mapped < 0 && y.mapped < 0){
  // a = y, o = x
    return 180 + atan(abs(x.mapped) / abs(y.mapped)) * CONV;
  }
  else if (x.mapped < 0 && y.mapped >0){
  // a = y, o = x
  return 270 + atan(abs(x.mapped)/y.mapped) * CONV;
  }
  else if (x.mapped == 0 && y.mapped >= 0){
    return 0;
  }
  else if (x.mapped == 0 && y.mapped < 0 ){
    return 180;
  }
  else if (y.mapped == 0 && x.mapped > 0){
    return 90;
  }
  else {
    return 270;
  }

}
