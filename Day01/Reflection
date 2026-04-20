# Day 01 Reflection: The Servo Precision Control Project
**Author:** Tran Hong Vy Ai  
**University:** Swinburne University of Technology

### 1. Introduction: What I built
This project is my first step into the world of Hardware Interfacing. I built a system where a **Servo motor** mimics the movement of my hand as I rotate a **Potentiometer**. 

### 2. Tools and Components: The "Why" behind them
I used an **Arduino Uno** as the "brain" because it is versatile and easy to program. 
* **Potentiometer:** Used as an input sensor to provide variable resistance, simulating a control dial.
* **Servo SG90:** Used as the actuator for precise angular positioning (0° to 180°).
* **Breadboard & Jumpers:** For a flexible, solderless circuit setup.

### 3. The Mathematics of Movement: Why "1023"?
One key concept I learned is the **10-bit Analog-to-Digital Converter (ADC)**. The Arduino slices the 5V input into $2^{10} = 1024$ steps (0 to 1023).

To match the Servo's range (0-180), I used a **Linear Transformation** formula:
$$y = (x - in\_min) \times \frac{out\_max - out\_min}{in\_max - in\_min} + out\_min$$

**Applied to my project:**
$$Angle = Val \times \frac{180 - 0}{1023 - 0} = Val \times \frac{180}{1023}$$

*Example:* If the potentiometer reads $512$ (halfway), the angle will be $512 \times (180/1023) \approx 90^\circ$.

### 4. Technical Hurdles: The "Buzzing" Sound
I encountered a **"rè rè" (jittering)** sound where the motor was vibrating but not rotating. 
* **The Discovery:** I learned about **Common Ground**. 
* **The Fix:** Once I connected the Servo's GND and the Arduino's GND to the same rail, the signal became stable. This taught me that every component needs a shared reference point to understand signals.

### 5. Signal Logic: PWM (Pulse Width Modulation)
I discovered that the Arduino controls the Servo position using **PWM**. It's not about the voltage level, but the **duration (Pulse Width)** of the "ON" signal within a 20ms period (50Hz).

**Key Pulse Widths for SG90:**
* **1.0ms Pulse:** Moves the motor to **0°**.
* **1.5ms Pulse:** Moves the motor to **90°**.
* **2.0ms Pulse:** Moves the motor to **180°**.

By using the `<Servo.h>` library, the Arduino automatically handles these microsecond timings, allowing me to simply command an angle.

### 6. Final Thoughts
This project taught me that even simple movements require a mix of **Physics (Voltage), Math (Mapping), and Logic (PWM)**. It makes me respect the complexity of real robots even more.

---
**Developed by:** Tran Hong Vy Ai  
**Date:** April 20, 2026
