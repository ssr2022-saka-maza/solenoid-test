#include <Arduino.h>
#include <ssr/DigitalOut.hpp>

ssr::DigitalOut pin(5);
bool flag;

void setup() {
    pin.begin();
    flag = false;
    Serial.begin(9600);
}

void loop() {
    if (!flag) {
        pin.setValue(true);
        flag = true;
        Serial.println("bun!!!!");
    } else {
        pin.setValue(false);
    }
    delay(100);
}
