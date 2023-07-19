#ifndef JOYSTICK_H
#define JOYSTICK_H

#include <Arduino.h>
#include "Button.h"
#include "Potentiometer.h"

class Joystick {
  private:
    Potentiometer x;
    Potentiometer y;

  public:
    Joystick(uint8_t Apinx = -1, uint8_t Apiny = -1, uint8_t Dpinsel = -1);
    Button sel;
    void set(uint8_t Apinx, uint8_t Apiny, uint8_t Dpinsel);
    void begin();
    void update();
    float get_forces();
    float get_angle();
};

#endif