#ifndef SWITCH_H
#define SWITCH_H
#include <Arduino.h>

class Switch{
  private:
    uint8_t pin;

  public:
    void set(uint8_t Dpin);
    void begin();
    void update();
    bool ON;
    bool OFF;
};


#endif
