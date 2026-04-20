#include <Servo.h>          // Include the Servo library to control the motor

Servo myServo;              // Create a servo object to represent the motor
int potPin = A0;            // Assign the potentiometer to analog pin A0
int val;                    // Variable to store the raw voltage value

void setup() {
  myServo.attach(9);        // Link the servo object to digital pin 9 (PWM)
}

void loop() {
  // STEP 1: Read the physical signal from the potentiometer
  // The Arduino converts 0V-5V input into a digital range of 0-1023
  val = analogRead(potPin); 

  // STEP 2: Data Mapping
  // Scale the potentiometer value (0-1023) to the servo's angle range (0-180 degrees)
  int angle = map(val, 0, 1023, 0, 180);

  // STEP 3: Write the processed angle to the servo motor
  myServo.write(angle); 

  // Delay of 15ms to allow the motor to reach the position (prevents jittering)
  delay(15);
}
