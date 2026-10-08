/*
  AcousticReef
  ------------

  Low-cost bio-acoustic monitoring prototype
  ESP32 firmware

  Current firmware stage:
  - Initialise the acoustic input
  - Sample the analogue signal
  - Calculate basic signal characteristics
  - Output measurements through Serial Monitor

  NOTE:
  The acoustic input pin is a temporary hardware configuration.
  Change AUDIO_INPUT_PIN after the actual hydrophone/signal-conditioning
  circuit and ESP32 wiring are finalized.
*/

#include <Arduino.h>

// ============================================================
// HARDWARE CONFIGURATION
// ============================================================

// Temporary analogue input pin for the conditioned acoustic signal.
// Change this to the GPIO actually connected to the circuit output.
const int AUDIO_INPUT_PIN = 34;

// Serial communication speed
const unsigned long SERIAL_BAUD = 115200;

// Number of samples collected for one analysis window
const int SAMPLE_COUNT = 256;

// Approximate sampling interval in microseconds.
// This is a starting value and should be calibrated later.
const unsigned long SAMPLE_INTERVAL_US = 125;   // ~8 kHz


// ============================================================
// SETUP
// ============================================================

void setup() {

  Serial.begin(SERIAL_BAUD);

  delay(500);

  // Configure acoustic input
  pinMode(AUDIO_INPUT_PIN, INPUT);

  // ESP32 ADC configuration
  analogReadResolution(12);

  Serial.println();
  Serial.println("=================================");
  Serial.println("       AcousticReef");
  Serial.println(" Bio-Acoustic Monitoring System");
  Serial.println("=================================");
  Serial.println("System initialising...");

  Serial.print("Audio input pin: ");
  Serial.println(AUDIO_INPUT_PIN);

  Serial.print("Sample count: ");
  Serial.println(SAMPLE_COUNT);

  Serial.println("System ready.");
  Serial.println();
}


// ============================================================
// MAIN LOOP
// ============================================================

void loop() {

  unsigned long startTime = micros();

  long sum = 0;
  int minimum = 4095;
  int maximum = 0;

  // ----------------------------------------------------------
  // Acquire acoustic samples
  // ----------------------------------------------------------

  for (int i = 0; i < SAMPLE_COUNT; i++) {

    int sample = analogRead(AUDIO_INPUT_PIN);

    sum += sample;

    if (sample < minimum) {
      minimum = sample;
    }

    if (sample > maximum) {
      maximum = sample;
    }

    // Maintain approximate sampling interval
    while (micros() - startTime < (unsigned long)(i + 1) * SAMPLE_INTERVAL_US) {
      // Wait for next sampling interval
    }
  }


  // ----------------------------------------------------------
  // Basic signal analysis
  // ----------------------------------------------------------

  float average = (float)sum / SAMPLE_COUNT;

  int peakToPeak = maximum - minimum;


  // ----------------------------------------------------------
  // Output results
  // ----------------------------------------------------------

  Serial.println("---- Acoustic Sample Window ----");

  Serial.print("Average ADC value: ");
  Serial.println(average);

  Serial.print("Minimum: ");
  Serial.println(minimum);

  Serial.print("Maximum: ");
  Serial.println(maximum);

  Serial.print("Peak-to-peak amplitude: ");
  Serial.println(peakToPeak);

  Serial.println();


  // Small pause before next analysis window
  delay(100);
}
