#include <Arduino.h>
#include <ssr/Solenoid.hpp>
ssr::Solenoid solenoid(5);

uint32_t lastTime = 0;

void setup() {
    solenoid.begin();
    Serial.begin(9600);
}

void loop() {
    solenoid.update();
    uint32_t currentTime = millis();
    if (currentTime - lastTime >= 5000) {
        Serial.println("bun!");
        solenoid.fire();
        lastTime = currentTime;
    }
    delay(10);
}
