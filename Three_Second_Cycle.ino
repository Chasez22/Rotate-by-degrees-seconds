// This program turns the stepper motor a set number of degrees every three seconds
// Include the Arduino Stepper Library:
#include <Stepper.h>
// Number of steps per rotation:
const int stepsPerRevolution = 2048;
const int quarterStepsPerRevolution = 512;
const int flatWasherIndex = 128;
// Wiring To The Arudino Uno:
// Pin 8 to IN1 on the ULN2003 driver
// Pin 9 to IN2 on the ULN2003 driver
// Pin 10 to IN3 on the ULN2003 driver
// Pin 11 to IN4 on the ULN2003 driver
// Create stepper object called 'myStepper', note the pin order:
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup()
{
  // Set the rpm: *might need to be set below 9 if motor isn't working*
  myStepper.setSpeed(9);
  // Initialize the serial port:
  Serial.begin(9600);
}
void loop() 
{
    // Steps one amount of degrees defined with the const int flatWasherIndex
    Serial.println("Kit");
    myStepper.step(flatWasherIndex);
    delay(3100);
}
