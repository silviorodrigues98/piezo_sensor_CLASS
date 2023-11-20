# Arduino Piezo Sensor Button

This Arduino code is designed to detect button presses using a piezo sensor connected to analog pin A0. The code includes a debounce mechanism to prevent false positives and can be easily extended with custom calibration logic.

## Components Used
- Arduino board
- Piezo sensor

## Dependencies
- Arduino.h

## Pin Configuration
- Piezo Sensor: A0

## Setup
1. Connect the piezo sensor to analog pin A0 on the Arduino board.
2. Upload the provided code to your Arduino.

## Code Explanation
- The code uses a threshold value to determine when a button press is detected.
- A debounce mechanism is implemented to prevent rapid toggling when the sensor value fluctuates around the threshold.
- Calibration code can be added within the conditional block to customize the behavior when a button press is detected.

## Usage
1. Open the Arduino IDE and upload the code to your Arduino board.
2. Open the serial monitor to observe the output.
3. Press the piezo sensor to trigger a button press detection.

## License
This project is licensed under the [MIT License](LICENSE).

## Author
Silvio Correa

Feel free to contribute or report issues!
