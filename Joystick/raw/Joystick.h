#ifndef JOYSTICK_H
#define JOYSTICK_H
#include <
#include <exception>

class MissingLibraryException : public std::exception {
private:
    const char* libraryName;

public:
    MissingLibraryException(const char* name) : libraryName(name) {}

    const char* what() const noexcept {
        return libraryName;
    }
};

class Joystick {
  private:
    Potentiometer x;
    Potentiometer y;
    void checkLibraryAvailability(const char* libraryName) {
    bool libraryAvailable = false;
        if (!libraryAvailable) {
            throw MissingLibraryException(libraryName);
        }
    }
   

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
