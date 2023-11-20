#include <Arduino.h>

#define PIEZO_PIN A0
#define THRESHOLD 10
#define DEBOUNCE_MS_DELAY 100

void setup()
{
    Serial.begin(115200);
    Serial.println("Setup started...");
    pinMode(PIEZO_PIN, INPUT);
}

void loop()
{
    static int previousValue = 0;
    static unsigned long previousMillis = 0;
    int sensorValue = analogRead(PIEZO_PIN);
    int difference = abs(sensorValue - previousValue);
    unsigned long currentMillis = millis();
    if (difference > THRESHOLD && currentMillis - previousMillis > DEBOUNCE_MS_DELAY)
    {
        Serial.println("Button pressed!");
        // Add your calibration code here
        previousMillis = currentMillis;
    }
    previousValue = sensorValue;
}
