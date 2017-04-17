#include <Arduino.h>

char data;

void setup() {
    Serial.begin(9600);
}

void loop() {
    if(Serial.isAvailable()) {
        data = Serial.read();
    }
}