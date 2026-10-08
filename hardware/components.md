# Hardware Components

AcousticReef is designed as a compact, low-cost bio-acoustic monitoring
platform. The main hardware components and their intended roles are listed
below.

| Component | Quantity | Role |
|---|---:|---|
| ESP32 | 1 | Main controller and data processing |
| Hydrophone | 1 | Captures underwater acoustic signals |
| Signal conditioning circuit | 1 | Conditions the acoustic signal before processing |
| Data storage | 1 | Stores recorded acoustic measurements |
| Battery | 1 | Provides power for the monitoring system |
| Waterproof enclosure | 1 | Protects the electronics during deployment |

---

## Hardware Architecture

The basic signal path is:

```text
Underwater Acoustic Environment
              ↓
          Hydrophone
              ↓
      Signal Conditioning
              ↓
             ESP32
              ↓
     Data Storage / Processing
```
The hydrophone captures underwater acoustic signals. The signal-conditioning
stage prepares the signal for acquisition by the ESP32.

The ESP32 performs initial signal acquisition and processing before the
measurements are stored or analysed.

## Current Hardware Status

The hardware architecture is currently at the prototype and development
stage.

Final component specifications, pin assignments, power requirements,
signal-conditioning design, and enclosure details will be documented as
the hardware is developed and tested.
