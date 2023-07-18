#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

#include <Arduino.h>

class Potentiometer{
  private:
    uint8_t pin;
  public:
    Potentiometer(uint8_t Apin = -1);
    void set(uint8_t Apin);
    void begin();
    void update();
    int brute;
    long mapped;
};

#endif
