![image](https://github.com/Samartic/Arduino-Object-oriented-Librairies/assets/113354976/e27fa5da-4fb1-486b-a9e6-f8142def4d3a)
# Joystick Library

The Joystick library allows you to interface with a joystick module on Arduino boards. It provides functionality to read the analog input values from two potentiometers (X and Y axes) and the digital input from a button (select). Additionally, it includes useful variables for angle and forces calculations.

## Prerequisites

Before using the Joystick library, make sure you have already installed and included the [Potentiometer](Potentiometer.md) and [Button](Button.md) libraries in your Arduino project. The Joystick library depends on these two libraries for its functionality.

## Library Structure

The Joystick library extends the functionality of the Potentiometer and Button libraries, allowing you to control a joystick module. It includes the following methods:

### set(byte ApinX, byte ApinY, byte DpinSel)

The `set()` method is used to set the pins to which the potentiometers and button of the joystick are connected. The `ApinX` and `ApinY` parameters represent the analog pins to which the X-axis and Y-axis potentiometers are connected, respectively. The `DpinSel` parameter represents the digital pin to which the select button is connected.

### begin()

The `begin()` method initializes the joystick and performs any necessary setup tasks. It internally calls the `begin()` methods of the Potentiometer and Button libraries to initialize their respective components.

### update()

The `update()` method reads the analog values from the X-axis and Y-axis potentiometers, as well as the digital state of the select button. It updates the necessary variables or attributes in your code. It should be called within the main loop of your Arduino sketch.

### Variables and Attributes

The Joystick library inherits the `brute`, `mapped`, `isengaged`, `nbclicks` and `ispressed` attributes from the [Potentiometer](https://github.com/Samartic/Arduino-Object-oriented-Librairies/blob/main/Potentiometer/Potentiometer.md) and [Button](https://github.com/Samartic/Arduino-Object-oriented-Librairies/blob/main/Button/Readme_Button.md) libraries. These attributes provide access to the raw analog values, mapped values, and button state, respectively, for the joystick's potentiometers and button.

Additionally, the Joystick library introduces the following methods:

#### `angle()`

The `get_angle()` method return the angle of the joystick position in degrees. It provides an angle measurement based on a Cartesian map, where the positive Y-axis corresponds to 0 degrees, and the positive X-axis corresponds to 90 degrees.

#### `forces`

The `get_forces` methods return the highest mapped and absolute value between the X-axis and Y-axis readings. It provides a measure of the overall magnitude or intensity of the joystick's position.

## Example Usage

```cpp
#include <Joystick.h>

Joystick myJoystick;

void setup() {
  myJoystick.set(A0, A1, 2);
  myJoystick.begin();
}

void loop() {
  myJoystick.update();

  int xAxisValue = myJoystick.bruteX;
  int yAxisValue = myJoystick.bruteY;
  // Use the raw analogRead values for X and Y axes as needed

  int mappedXValue = myJoystick.mappedX;
  int mappedYValue = myJoystick.mappedY;
  // Use the mapped values for X and Y axes for further processing or control

  bool isButtonPressed = myJoystick.isPressed;
  // Use the button state for any required actioangl

  int joystickAngle = myJoystick.get_angle();
  // Use the angle value for directional control or calculations

  int joystickForces = myJoystick.get_forces();
  // Use the forces value for intensity-based control or calculations

  // Perform other actions based on the joystick readings
}
```

## Getting Started

To start using the Joystick library in your Arduino projects, follow these steps:

1. Make sure you have already installed and included the [Potentiometer](https://github.com/Samartic/Arduino-Object-oriented-Librairies/blob/main/Potentiometer/Potentiometer.md) and [Button](https://github.com/Samartic/Arduino-Object-oriented-Librairies/blob/main/Button/Readme_Button.md) libraries in your Arduino project.

2. Download the Joystick library by clicking [here](https://github.com/Samartic/Arduino-Object-oriented-Librairies/blob/main/Joystick/joystick.zip).

3. Open the Arduino IDE. If not yet install click [Here}(https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE).

5. Select **Sketch → Include Library → Add .ZIP Library** and choose the downloaded library file.

6. You are now ready to incorporate joystick functionality into your Arduino projects using the Joystick library.
7. You might be interested in the following gear to setup your project:
   1. [Arduino Uno](https://amzn.to/3Q3OnJc)
   2. [Starter kit](https://amzn.to/44T1EIL)
   3. [Push button for arduino](https://amzn.to/3pKBLMo)
   4. [Colorfull button](https://amzn.to/3rBTC8H)


## FAQ
1. How do you wire a joystick ?
   Defining the connections to the Joystick module is the first step in the sketch. The VRx and VRy pins are connected to Analog pins A0 and A1, while the SW pin is attached to Arduino   pin A2.

2. The analog joystick is comparable to two connected potentiometers, one for Y-axis (vertical movement) and the other for X-axis (horizontal movement). A Select switch is also included with the joystick.



## Contributing

Contributions to the Joystick library are welcome! If you have any improvements, bug fixes, or new features to contribute, please follow these steps:

1. Fork this repository and create a new branch for your changes.

2. Make your modifications and ensure they adhere to the library's coding guidelines.

3. Submit a pull request, providing a clear description of the changes and any relevant documentation updates.

Your contributions will be reviewed, and upon approval, they will be merged into the main repository.

## License

This library is licensed under the [MIT License](LICENSE), allowing for free use, modification, and distribution.
