![image](https://github.com/Samartic/Arduino-Object-oriented-Librairies/assets/113354976/e27fa5da-4fb1-486b-a9e6-f8142def4d3a)
# Potentiometer Library

The Potentiometer library provides functionality to interface with potentiometers (variable resistors) on Arduino boards. It allows you to easily read the analog input value from a potentiometer and perform further processing.

## Library Structure

The library follows a similar structure to the Button library, providing the following methods:

### set(byte Apin)

The `set()` method is used to set the analog pin to which the potentiometer is connected. The `Apin` parameter should be passed as the analog pin number to which the potentiometer is connected. For example, `set(A0)` assigns the potentiometer to analog pin 0.

### begin()

The `begin()` method initializes the potentiometer and performs any necessary setup tasks. You can include any code that needs to be executed during the setup phase of your Arduino sketch in this method.

### update()

The `update()` method reads the analog value from the potentiometer and updates the necessary variables or attributes in your code. It should be called within the main loop of your Arduino sketch.

### Variables and Attributes

The Potentiometer library also includes the following variables and attributes:

#### `brute`

The `brute` variable holds the raw analogRead value obtained from the potentiometer. It ranges from 0 to 1023.

#### `mapped`

The `mapped` variable stores the value of `brute` mapped to a range of -100 to 100. This mapping allows you to work with a more convenient and normalized value range.

## Example Usage

```cpp
#include <Potentiometer.h>

Potentiometer myPotentiometer;

void setup() {
  myPotentiometer.set(A0);
  myPotentiometer.begin();
}

void loop() {
  myPotentiometer.update();

  int rawValue = myPotentiometer.brute;
  // Use the raw analogRead value as needed

  int mappedValue = myPotentiometer.mapped;
  // Use the mapped value for further processing or control

  // Perform other actions based on the potentiometer readings
}
```

## Getting Started

To start using the Potentiometer library in your Arduino projects, follow these steps:

1. Download the Potentiometer library by clicking [here](https://github.com/Samartic/Arduino-Object-oriented-Librairies/blob/main/Potentiometer/potentiometer.zip).

2. Open the Arduino IDE.

3. Select **Sketch → Include Library → Add .ZIP Library** and choose the downloaded library file.

4. You are now ready to incorporate potentiometer functionality into your Arduino projects using the Potentiometer library.

5. You might be interesseted to the following product:
   1. [Arduino Uno](https://amzn.to/3Q3OnJc)
   2. [Starter kit](https://amzn.to/44T1EIL)
   3. [Push button for arduino](https://amzn.to/3pKBLMo)
   4. [Colorfull button](https://amzn.to/3rBTC8H)


## Contributing

Contributions to the Potentiometer library are welcome! If you have any improvements, bug fixes, or new features to contribute, please follow these steps:

1. Fork this repository and create a new branch for your changes.

2. Make your modifications and ensure they adhere to the library's coding guidelines.

3. Submit a pull request, providing a clear description of the changes and any relevant documentation updates.

Your contributions will be reviewed, and upon approval, they will be merged into the main repository.

## License

This library is licensed under the [MIT License](LICENSE), allowing for free use, modification, and distribution.

