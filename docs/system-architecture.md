# System Architecture

## Overview

AcousticReef is designed as a low-cost bio-acoustic monitoring system for
exploring underwater acoustic signals associated with coral reef environments.

The system follows a simple sensing and processing pipeline:

Underwater Acoustic Environment
        ↓
     Hydrophone
        ↓
Signal Conditioning
        ↓
       ESP32
        ↓
 Data Storage / Processing
        ↓
 Acoustic Data Analysis


## 1. Acoustic Sensing

The hydrophone acts as the primary acoustic sensing element. It captures
underwater sound signals from the surrounding environment.

These signals may contain information related to biological activity and
the broader acoustic environment of a coral reef ecosystem.


## 2. Signal Conditioning

The raw signal from the hydrophone is conditioned before being passed to
the ESP32.

The signal-conditioning stage is intended to make the acoustic signal
suitable for acquisition by the microcontroller.


## 3. Embedded Processing

The ESP32 acts as the main embedded controller.

It acquires the conditioned acoustic signal and performs the initial
processing required by the monitoring system.

The firmware is responsible for sensor interfacing, signal acquisition,
basic signal processing, and communication with the storage or analysis
stage.


## 4. Data Storage

Acoustic measurements can be stored for later analysis.

Recorded data provides a basis for examining changes in the underwater
soundscape over time.


## 5. Acoustic Analysis

The collected acoustic data can be analysed to investigate patterns and
characteristics of the underwater soundscape.

The initial prototype focuses on establishing a reliable low-cost method
for acquiring and recording underwater acoustic information.


## Design Approach

The system is intentionally modular. The sensing, signal-conditioning,
embedded-processing, and data-analysis stages can be developed and tested
independently.

This makes it possible to improve individual parts of the system without
redesigning the entire platform.


## Current Development Status

AcousticReef is a prototype system. Hardware specifications, firmware,
signal-processing methods, and data-analysis techniques will be refined
as development and testing progress.
