# AcousticReef

### A Low-Cost Bio-Acoustic Monitoring System for Coral Reef Environments

AcousticReef is a prototype environmental monitoring system designed to explore underwater acoustic signals associated with coral reef ecosystems.

The project combines underwater acoustic sensing, embedded electronics, data acquisition, and acoustic analysis into a compact monitoring platform.

---

## Motivation

Coral reef ecosystems produce and interact with a complex underwater soundscape. Changes in this acoustic environment may provide useful information about reef activity and ecosystem conditions.

AcousticReef explores whether a low-cost sensing platform can be used to capture and analyse these underwater acoustic signals.

---

## Objectives

- Capture underwater acoustic signals
- Develop a low-cost acoustic sensing platform
- Perform basic signal acquisition and processing
- Record acoustic measurements for later analysis
- Explore patterns in underwater soundscapes
- Develop a modular platform for future environmental monitoring

---

## How It Works

The system follows a basic sensing and processing pipeline:

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

The hydrophone captures underwater acoustic signals. The signal is conditioned and passed to the ESP32, which performs initial acquisition and processing. The resulting measurements can then be stored and analysed.

```

---

## Hardware

| Component | Purpose |
|---|---|
| ESP32 | Main controller and data processing |
| Hydrophone | Underwater acoustic sensing |
| Signal conditioning circuit | Conditions the acoustic signal |
| Data storage | Stores measurements |
| Battery | Provides system power |
| Waterproof enclosure | Protects the electronics |

Detailed hardware information is available in `hardware/components.md`.

---

## Firmware

The current ESP32 firmware focuses on:

- Analogue acoustic signal acquisition
- Fixed-window sampling
- Basic signal measurements
- Serial Monitor output

The firmware is available in `firmware/acousticreef.ino`.

---

## Data

The current prototype calculates basic measurements from the acquired acoustic signal:

- Average ADC value
- Minimum sampled value
- Maximum sampled value
- Peak-to-peak amplitude

Data documentation is available in `data/README.md`.

---

## Research

The project draws on research and technical documentation related to:

- Coral reef soundscapes
- Bio-acoustics
- Underwater acoustic sensing
- Embedded systems
- Acoustic signal processing

Research references are maintained in `research/references.md`.

---

## Documentation

- Project Concept
- System Architecture
- Hardware Components
- Firmware Documentation
- Data Documentation
- Research References

---

## Current Status

**Prototype / Development Stage**

The current implementation focuses on establishing basic acoustic signal acquisition and embedded processing.

Hardware integration, data logging, advanced signal processing, and environmental testing will be developed and validated progressively.

---

## Future Scope

Potential future development includes:

- Improved underwater acoustic sensing
- Long-duration data collection
- Structured acoustic datasets
- Advanced acoustic signal processing
- Acoustic feature extraction
- Machine-learning-based classification
- Improved waterproofing and deployment
- Additional environmental sensors

---

## License

This project is licensed under the MIT License
