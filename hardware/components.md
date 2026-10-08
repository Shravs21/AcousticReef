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

## Hardware Architecture

The basic signal path is:

Underwater acoustic environment
→ Hydrophone
→ Signal conditioning
→ ESP32
→ Data storage / processing

The final component specifications, pin assignments, power requirements,
and enclosure design will be documented as the prototype is developed.
