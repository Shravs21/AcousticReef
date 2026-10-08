# Acoustic Data

AcousticReef is intended to collect underwater acoustic measurements for
examining the surrounding underwater soundscape.

## Data Collected

The prototype firmware currently records basic measurements from the
conditioned acoustic signal, including:

- Average ADC value
- Minimum sampled value
- Maximum sampled value
- Peak-to-peak amplitude

## Data Format

During the current prototype stage, measurements are output through the
ESP32 Serial Monitor.

Future versions may store measurements in a structured format such as CSV
for later analysis.

A possible data structure is:

| Timestamp | Average | Minimum | Maximum | Peak-to-Peak |
|---|---:|---:|---:|---:|
| Example | Example | Example | Example | Example |

## Data Analysis

Collected measurements can be used to investigate changes in acoustic
activity over time.

More advanced acoustic features and analysis methods will be added as the
prototype develops.

## Current Status

No field dataset is included in this repository yet. Data files will be
added after experimental testing produces suitable recordings.
