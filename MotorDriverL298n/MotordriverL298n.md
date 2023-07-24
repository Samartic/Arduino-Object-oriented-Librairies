![image](https://github.com/Samartic/Arduino-Object-oriented-Librairies/assets/113354976/e27fa5da-4fb1-486b-a9e6-f8142def4d3a)
# MotorDriver Library for Arduino

The MotorDriver library provides a simplified and efficient way to control motors with your Arduino board. Whether you're working on robotics, automation, or any motor-driven project, this library streamlines the coding process and enables precise control over motor speed and direction.

## Features

- **Easy Setup:** With just a few lines of code, you can integrate the MotorDriver library into your project effortlessly.

- **Motor Configuration:** The `set()` method allows you to define the pins for the motor driver's IN1, IN2, and EN1 (enable) connections.

- **Automatic Initialization:** The `begin()` method takes care of the necessary setup tasks, so you can focus on the core functionality of your project.

- **Smooth Motor Control:** Use the `move(speed)` method to control the motor speed and direction. The `speed` parameter accepts values from -100 to 100, where negative values determine the rotation direction, and the absolute value represents the force applied to the motor.

- **Precise Force Mapping:** The `move(speed)` method automatically maps the absolute value of the `speed` parameter to the appropriate motor force range (0 to 255). This ensures accurate and consistent control over motor intensity.

## Example Usage

```cpp
#include <MotorDriver.h>

// Create an instance of the MotorDriver class
MotorDriver myMotor;

void setup() {
  // Configure the motor pins (IN1, IN2, EN1)
  myMotor.set(5, 6, 9);
  // Initialize the motor driver
  myMotor.begin();
}

void loop() {
  // Move the motor forward with 70% intensity
  myMotor.move(70);
  delay(2000); // Wait for 2 seconds

  // Move the motor backward with 50% intensity
  myMotor.move(-50);
  delay(2000); // Wait for 2 seconds

  // Stop the motor
  myMotor.move(0);
  delay(1000); // Wait for 1 second
}
```

## Getting Started

To start using the MotorDriver library in your Arduino projects, follow these steps:

1. Download the MotorDriver library by clicking [here](https://github.com/username/motor-driver-library/archive/main.zip).

2. Open the Arduino IDE.

3. Select **Sketch → Include Library → Add .ZIP Library** and choose the downloaded library file.

4. Connect your motor driver to the Arduino board, making sure to match the correct pins for IN1, IN2, and EN1.

5. Incorporate the example usage code in your Arduino sketch and customize it to suit your motor control requirements.

6. Upload the code to your Arduino board, and witness smooth and precise motor control using the MotorDriver library.

7. You might be interested in the following gear to setup your project:
   1. [Arduino Uno](https://amzn.to/3Q3OnJc)
   2. [Starter kit](https://amzn.to/44T1EIL)
   3. [Push button for arduino](https://amzn.to/3pKBLMo)
   4. [Colorfull button](https://amzn.to/3rBTC8H)

## Contributing

Contributions to the MotorDriver library are encouraged! If you have improvements, bug fixes, or new features to contribute, please follow these steps:

1. Fork this repository and create a new branch for your changes.

2. Implement your modifications and adhere to the library's coding guidelines.

3. Submit a pull request, providing a clear description of your changes and any relevant documentation updates.

Your contributions will be reviewed, and upon approval, they will be merged into the main repository.

## License

This library is licensed under the [MIT License](LICENSE), allowing for free use, modification, and distribution.

For any questions or support, feel free to contact us at [email@example.com](mailto:email@example.com). Happy motor driving! 🚗💨
