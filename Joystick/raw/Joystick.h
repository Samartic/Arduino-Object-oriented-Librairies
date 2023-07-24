#ifndef JOYSTICK_H
#define JOYSTICK_H
#include "Potentiometer.h"
#include "Button.h"

class Joystick {
   
  public:
    Joystick(uint8_t Apinx = -1, uint8_t Apiny = -1, uint8_t Dpinsel = -1);
    void set(uint8_t Apinx, uint8_t Apiny, uint8_t Dpinsel);
    void begin();
    void update();
    float get_forces();
    float get_angle();
    Button sel;
    Potentiometer x;
    Potentiometer y;
};

#endif
