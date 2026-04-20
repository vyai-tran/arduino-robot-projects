# 🤖 Arduino Robotics Projects

Welcome to my robotics journey! This repository documents my hands-on experience with Arduino, sensors, and actuators.

## 📍 Project 1: Servo Motor Control with Potentiometer
In this initial project, I implemented a control loop to map analog input from a potentiometer to precise mechanical movement of a servo motor.

### 🛠 Technical Specifications
* **Microcontroller:** Arduino Uno
* **Actuator:** SG90 Servo Motor
* **Input:** 10k Potentiometer
* **Key Concepts:** ADC (Analog-to-Digital Conversion), PWM (Pulse Width Modulation), and Data Mapping.

### 📺 Demo
*(You can drag and drop your video clip here to showcase the working motor!)*

### 🧠 Technical Insight & Reflections
During this project, I focused on the integration between hardware signals and software logic.

#### 1. Challenges Faced:
- **Jittering & Power Issues:** Initially, the servo motor was making a buzzing sound (jittering) without rotating. I diagnosed this as a common ground issue and potential voltage drop. By reinforcing the jumper connections and ensuring a stable 5V supply from the Arduino, the movement became smooth.
- **Library Management:** Encountered a compilation error due to a missing library header. Resolved by correctly including `<Servo.h>`.

#### 2. Optimization:
- **Data Scaling:** Used the `map()` function to calibrate the 10-bit analog input (0-1023) to the 180-degree physical range of the actuator.
- **Control Loop Timing:** Implemented a 15ms delay to match the servo's mechanical response time, preventing command overlaps.

#### 3. Future Enhancements:
- Integrate an ultrasonic sensor to automate the servo movement based on distance.
- Design a 3D-printed or cardboard-based robotic arm structure.
---
*Developed by Tran Hong Vy Ai - Swinburne University of Technology.*

