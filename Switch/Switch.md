![image](https://github.com/Samartic/Arduino-Object-oriented-Librairies/assets/113354976/e27fa5da-4fb1-486b-a9e6-f8142def4d3a)
# Switch Library for Arduino

The Switch library provides an intuitive and efficient way to interface with switches in your Arduino projects. Whether you're working on home automation, IoT devices, or interactive projects, this library simplifies switch handling and enables easy status checks.

## Features

- **Easy Setup:** With the `set()` method, you can quickly define the pin for the switch, making it hassle-free to configure.

- **Automatic Initialization:** The `begin()` method takes care of the necessary setup tasks, so you can focus on the core functionality of your project.

- **Real-Time Status Updates:** The `update()` method continuously monitors the switch state and updates the `ON` and `OFF` attributes accordingly, making it more logical to use `switch.ON` or `switch.OFF` in your code.

- **Intuitive Attribute Usage:** The library uses `True` (0) for `ON` and `False` (1) for `OFF`, providing a more natural and intuitive way to check the switch status.

## Example Usage

```cpp
#include <Switch.h>

// Create an instance of the Switch class
Switch mySwitch;

void setup() {
  // Set the pin for the switch
  mySwitch.set(2);
  // Initialize the switch
  mySwitch.begin();
}

void loop() {
  // Continuously update the switch status
  mySwitch.update();

  // Check if the switch is ON
  if (mySwitch.ON) {
    // Perform actions when the switch is ON
  } else {
    // Perform actions when the switch is OFF
  }
}
```

## Getting Started

To start using the Switch library in your Arduino projects, follow these steps:

1. Download the Switch library by clicking [here](https://github.com/username/switch-library/archive/main.zip).

2. Open the Arduino IDE.

3. Select **Sketch → Include Library → Add .ZIP Library** and choose the downloaded library file.

4. Connect your switch to the Arduino board and make sure to specify the correct pin for the switch using the `set()` method.

5. Incorporate the example usage code in your Arduino sketch and customize it to fit your switch-based project needs.

6. Upload the code to your Arduino board, and enjoy seamless switch handling with the Switch library.

7. You might be interested in the following gear to set up your project:
   - [Arduino Uno](https://amzn.to/3Q3OnJc)
   - [Starter Kit](https://amzn.to/44T1EIL)
   - [Push Button for Arduino](https://amzn.to/3pKBLMo)
   - [Colorful Button](https://amzn.to/3rBTC8H)

## Contributing

Contributions to the Switch library are welcome! If you have improvements, bug fixes, or new features to contribute, please follow these steps:

1. Fork this repository and create a new branch for your changes.

2. Implement your modifications and adhere to the library's coding guidelines.

3. Submit a pull request, providing a clear description of your changes and any relevant documentation updates.

Your contributions will be reviewed, and upon approval, they will be merged into the main repository.

## License

This library is licensed under the [MIT License](LICENSE), allowing for free use, modification, and distribution.

For any questions or support, feel free to contact us at [email@example.com](mailto:email@example.com). Happy switching! 🎛️💡
