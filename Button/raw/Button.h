#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button{
  private:
    uint8_t pin;
    int clicks;

  public:
    Button(uint8_t Dpin = -1);
    void set(uint8_t Dpin);
    void begin();
    void update();
    bool ispressed;
    bool isengage;
    int nbclicks;
};

#endif
