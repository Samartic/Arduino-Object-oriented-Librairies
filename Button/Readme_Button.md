# Button Library

The Button library is designed to handle button inputs on Arduino boards. It provides a convenient and efficient way to interact with buttons and incorporate button functionality into your Arduino projects.

## Library Structure

The library follows a consistent structure that allows for easy integration and usage. Here are the main components of the Button library:

### set(byte Dpin)

The `set()` method is used to set the pin to which the button is connected in the code. The pin parameter follows a format of D/A (Digital or Analog), pin number, and any relevant information like "in" or "en" for motor drivers. For example, `set(D2)` assigns the button to digital pin 2.

### begin()

The `begin()` method is responsible for initializing the button and performing any necessary setup tasks. You can include any code that needs to be executed during the setup phase of your Arduino sketch in this method.

### update()

The `update()` method is called within the main loop of your Arduino sketch. It reads the button state and performs any necessary actions based on the button's current status.

### isPressed

The `isPressed` attribute is a variable that indicates whether the button is currently being pressed. It returns `true` if the button is pressed and `false` otherwise.

### isEngaged

The `isEngaged` attribute is a variable that indicates whether the number of button clicks is odd. It is particularly useful for initiating a second mode or alternate functionality. It returns `true` if the number of clicks is odd and `false` otherwise.

### nbClicks

The `nbClicks` attribute is a variable that holds the number of button clicks that have occurred since the last reset. It provides a count of the total number of clicks for tracking and further processing.

### resetClickCount()

The `resetClickCount()` method resets the `nbClicks` variable back to 0, allowing you to start counting clicks anew.

## Example Usage
It follow the usages principale accros all the library

```cpp
#include <Button.h>

Button myButton;
myButton.set(D2);

void setup() {
  
  myButton.begin();
}

void loop() {
  myButton.update();

  if (myButton.isPressed) {
    // Perform actions when the button is pressed
  }

  if (myButton.isEngaged) {
    // Activate second mode or alternate functionality
  }

  int clickCount = myButton.nbClicks;
  // Do something with the click count

  // Reset click count if needed
  if (/* some condition */) {
    myButton.resetClickCount();
  }
}
```

For more examples and detailed information, you can refer to the [Arduino Reference - Press Button Example](https://docs.arduino.cc/built-in-examples/digital/Button).

## Getting Started

To start using the Button library in your Arduino projects, follow these steps:

1. Download the Button library by clicking [here](https://github.com/username/button-library/archive/main.zip).

2. Open the Arduino IDE.

3. Select **Sketch → Include Library → Add .ZIP Library** and choose the downloaded library file.

4. You are now ready to incorporate button functionality into your Arduino projects using the Button library.

5. You might be interesseted to the following product:
   1. [Arduino Uno](https://amzn.to/3Q3OnJc)
   2. [Starter kit](https://amzn.to/44T1EIL)
   3. [Push button for arduino](https://amzn.to/3pKBLMo)
   4. [Colorfull button](https://amzn.to/3rBTC8H)


## FAQ
Here are answers to some common questions related to Arduino's button:

1. Do you need a resistor for a button?
  Everyone will insist on utilizing the resistor because it is necessary for a button to function properly. Each Arduino pin, however, has a     little-known secret hidden inside. With just one tiny modification to our code, we can turn on the pull-up resistors that are already present on each pin.

2. What is a button in Arduino?
   The switches that make and break electrical connections in the circuits are comparable to the buttons. The button alternates between an ON and an OFF state. A single press activates the condition, while a second press deactivates it.

3. How does a button Work?
   When the button or actuator is pressed, the internal spring and contacts are depressed, and the stable contacts at the bottom of the switch are touched. The electrical circuit will be closed or opened as a result of this process.
   

## Contributing

Contributions to the Button library are welcome! If you have any improvements, bug fixes, or new features to contribute, please follow these steps:

1. Fork this repository and create a new branch for your changes.

2. Make your modifications and ensure they adhere to the library's coding guidelines.

3. Submit a pull request, providing a clear description of the changes and any relevant documentation updates.

Your contributions will be reviewed, and upon approval, they will be merged into the main repository.


## License

This library is licensed under the [MIT License](LICENSE), allowing for free use, modification, and distribution.

