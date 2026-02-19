#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author AkshitaAg25
 * @date 2026-02-19
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define FSR analog pin (Use A0)

 // TODO 2:
 // Create variable to store sensor reading
int value=0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("Force Measurement System Initialized");
}

void loop() {

    // TODO 5:
    // Read analog value from FSR
    value= analogRead(A0);

    // TODO 6:
    // Print raw ADC value
    Serial.println(value);

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)
    if (value>250) {
        Serial.println("High Pressure Detected!");
    }

    // TODO 8:
    // Print pressure detection message
    Serial.println("Pressure Detection Check Completed");

    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(500);
}
