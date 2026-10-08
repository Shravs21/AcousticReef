# Testing and Validation

AcousticReef is currently at the prototype and development stage.

Testing is being carried out progressively as individual hardware and
software components are developed.

---

## 1. Firmware Testing

The current firmware can be tested by connecting the ESP32 to a computer
and observing the Serial Monitor.

The firmware should:

- Initialise the ESP32 correctly
- Read the configured analogue input
- Collect the defined sample window
- Calculate the average ADC value
- Identify the minimum sampled value
- Identify the maximum sampled value
- Calculate peak-to-peak amplitude
- Output the measurements through the Serial Monitor

---

## 2. Signal Acquisition Testing

The acoustic input stage will be evaluated to determine whether the
conditioned hydrophone signal can be reliably acquired by the ESP32.

Testing will examine:

- Signal presence
- ADC response
- Signal stability
- Noise levels
- Repeatability of measurements

---

## 3. Hardware Testing

Individual hardware components will be tested before full system
integration.

Planned checks include:

- ESP32 operation
- Hydrophone signal acquisition
- Signal-conditioning operation
- Data-storage operation
- Power-system operation
- Waterproof enclosure integrity

---

## 4. System Integration Testing

After individual components have been tested, the complete sensing chain
will be evaluated:

```text
Hydrophone
    ↓
Signal Conditioning
    ↓
ESP32
    ↓
Data Storage / Processing
```
The purpose of integration testing is to verify that the individual
components operate correctly together.

## Acoustic Data Validation

Recorded measurements will be examined for consistency and unexpected
behaviour.

Future testing may compare measurements collected under different
controlled acoustic conditions to determine whether the system can
reliably detect changes in acoustic activity.

## Current Testing Status

Detailed experimental results have not yet been added to this repository.

Test results, observations, measurements, and experimental datasets will
be documented here as testing progresses.
ESP32
    ↓
Data Storage / Processing
