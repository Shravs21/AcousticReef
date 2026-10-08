# AcousticReef Firmware

This folder contains the firmware and embedded software developed for the
AcousticReef prototype.

The firmware is responsible for sensor interfacing, acoustic signal
acquisition, basic signal processing, and communication with other system
components.

---

## Current Firmware

The current prototype firmware:

- Reads an analogue acoustic signal
- Collects a fixed sample window
- Calculates basic signal measurements
- Outputs measurements through the ESP32 Serial Monitor

The main firmware file is:

`acousticreef.ino`

---

## Current Measurements

The firmware currently calculates:

- Average ADC value
- Minimum sampled value
- Maximum sampled value
- Peak-to-peak amplitude

These measurements provide basic information about the acquired acoustic
signal.

---

## Development Status

The firmware is currently a prototype implementation.

The analogue input configuration is temporary and will be updated after
the final hydrophone, signal-conditioning circuit, and ESP32 wiring are
established.

Future development may include:

- Final hydrophone interface
- Signal-conditioning integration
- Data logging
- More advanced acoustic signal processing
- Structured acoustic data output
