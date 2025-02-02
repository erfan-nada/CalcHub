# CalcHub - Embedded Based Calculator

## Project Overview

CalcHub is an embedded system project designed as a functional calculator using an Arduino microcontroller, a 4x4 keypad for user input, and an I2C LCD for displaying results. This project demonstrates the integration of hardware components with software to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Project Details

- **Course Title:** Digital Logic Design

## Features

- Basic arithmetic operations: addition, subtraction, multiplication, and division.
- User-friendly interface with a 4x4 keypad for input and an I2C LCD for output.
- Error handling for division by zero and invalid inputs.
- Hands-on embedded system learning experience using Arduino.

## Hardware Requirements

- **Microcontroller:** Arduino Uno
- **Keypad:** 4x4 matrix keypad
- **Display:** I2C LCD display
- **Connections:** Jumper wires, USB cable for power

## Software Requirements

- **Arduino IDE:** Used for code development and uploading to the microcontroller.
- **Programming Language:** Arduino C++
- **Libraries Used:**
  - `LiquidCrystal_I2C.h` (for LCD interface)
  - `Keypad.h` (for keypad input handling)

## Installation & Setup

1. Install the **Arduino IDE** from [Arduino Official Website](https://www.arduino.cc/en/software).
2. Download the required libraries and include them in the Arduino IDE.
3. Connect the hardware components as per the circuit diagram.
4. Upload the provided Arduino sketch to the Arduino Uno.
5. Power on the system and start using the calculator.

## Usage Instructions

- Press numerical keys (0-9) to enter numbers.
- Use the following keys for operations:
  - `A` → Addition (+)
  - `B` → Subtraction (-)
  - `C` → Multiplication (\*)
  - `D` → Division (/)
  - `*` → Clear (C)
  - `#` → Equals (=)
- Results will be displayed on the LCD screen.

## Challenges Faced & Solutions

- **Multiple Arithmetic Operations**: Initially faced errors while performing consecutive calculations. Resolved by updating the code with additional variables and `if` conditions.
- **LCD Display Integration**: Ensured proper communication between Arduino and LCD using the `LiquidCrystal_I2C` library.

## Future Improvements

- Addition of advanced mathematical functions (e.g., exponentiation, logarithms).
- Wireless communication via Bluetooth/Wi-Fi for remote operation.
- Integration with a mobile app for a more interactive user interface.

## References

- Dr. Ahmed ElShafee's [YouTube Playlist](https://youtube.com/playlist?list=PLzIiZDNBNt9yfdpPPJHs3Ki7enHg7dhH-)
- Circuit Digest: [Arduino Calculator using 4x4 Keypad](https://circuitdigest.com/microcontroller-projects/arduino-calculator-using-4x4-keypad)

## License

This project is developed for educational purposes and is open for further modifications and improvements.

