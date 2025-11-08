# Arduino DC Motor PWM Controller with Push Buttons

[![Tinkercad Design](https://img.shields.io/badge/Tinkercad-View%20Design-brightgreen?style=for-the-badge&logo=tinkercad)](https://www.tinkercad.com/things/hM7xuqlaAPW-arduino-dc-motor-controller?sharecode=fTR0VJ1MF7x52sB05V9uynOJFpLAZXVYweU7w-ntLRI)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](https://opensource.org/licenses/MIT)

A **software-based PWM DC motor speed controller** using an Arduino, a 2N2222 transistor, and three bitmasked push buttons to adjust the motor’s duty cycle (80%, 50%, 20%) through port registers.

---
![Project Preview](./img/arduino-dc-motor-siumulation.gif)
![schematic](./img/Arduino DC Motor Controller.pdf)

---

### Features
- 3 speed levels using push buttons (1 at bottom):
  - **Button 3** → **80% duty cycle** (fast)
  - **Button 2** → **50% duty cycle** (medium)
  - **Button 1** → **20% duty cycle** (slow)
- Pure software PWM using `delay()`
- Uses **PORT registers** for fast I/O

---

### Wiring Diagram

| Component         | Arduino Pin |
|-------------------|-------------|
| Push Button 1     | PC0 (A0)    |
| Push Button 2     | PC1 (A1)    |
| Push Button 3     | PC2 (A2)    |
| DC Motor          | PD0 (D0)    |

> Use pull-up resistors (10kΩ) on buttons or enable internal pull-ups if preferred.

---
