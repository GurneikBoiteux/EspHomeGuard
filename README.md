# EspHomeGuard — ESP32 Smart Home Alarm System

This is “EspHomeGuard”: a fully custom alarm / security system running on an ESP32, with support for sensors, keypad control, and cloud connectivity via MQTT.  
It’s meant to show what a real embedded + IoT project can look like when built from scratch, combining hardware, firmware, and network/cloud integration.

---

## 🔧 What I Used & Built

- **ESP32** — the microcontroller that runs the whole system, handles Wi-Fi and I/O.  
- **Ultrasonic sensor** — to detect motion/distance (for intrusion detection).  
- **LCD display (custom I²C driver)** — for showing status, alerts, messages locally on the device.  
- **Keypad input (matrix keypad)** — to arm/disarm the alarm, enter codes, control system directly without needing a phone.  
- **MQTT (cloud broker)** — allows the device to connect to a remote broker so status and alerts can be published or received remotely.  
- **Embedded C/C++ firmware** — low-level code for sensor reading, keypad scanning, I²C communication, MQTT connectivity, state machine logic, alarm triggering, etc.  
- **Wi-Fi connectivity** — using ESP32’s built-in Wi-Fi to communicate with the cloud broker or local network.  

---

## ✅ What It Does

When powered on, EspHomeGuard will:

- Monitor the environment using the ultrasonic sensor (or other sensors you hook up).  
- Display system status (armed/disarmed, sensor readings, alerts) on the LCD.  
- Allow local control via the keypad (e.g. enter a PIN to arm/disarm, trigger alarm, etc.).  
- Connect to a remote MQTT broker to publish sensor data or alarm events, enabling remote monitoring or integration with smart-home/cloud systems.  
- Trigger alarms or alerts (can be expanded: buzzer, notifications, etc.) when sensors detect suspicious events.  
- Provide a modular base that can be extended with more sensors (PIR, door/window sensors), additional outputs (LEDs, buzzers), or remote control UIs (mobile/web).  

---

## 🧠 What I Learned & Why It Matters

Working on EspHomeGuard helped me build **real embedded & IoT skills**:

- Low-level firmware development on an embedded microcontroller (ESP32)  
- Handling I²C communication for displays and peripheral devices  
- Reading sensor data (ultrasonic / analog / digital) reliably in real time  
- Scanning keypad matrix and debouncing / input validation — skills often used in real embedded control panels  
- Integrating Wi-Fi and MQTT — fundamental for modern IoT, smart-home and cloud-connected devices :contentReference[oaicite:2]{index=2}  
- Designing a state machine for alarm control (armed, disarmed, triggered, alert, etc.)  
- Combining hardware and network/cloud systems — shows that you understand both embedded electronics *and* connectivity  

This project bridges **embedded systems**, **home automation**, and **cloud-ready IoT** — making it a strong showcase if I apply to jobs in firmware, IoT development, or embedded Linux/embedded-device engineering.

---
