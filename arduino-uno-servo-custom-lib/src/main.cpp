#include <Arduino.h>
#include <Servo.h>
#include <CustomServo.h>

CustomServo servo;

void setup() {
    servo.init(3);
}

void loop() {
    servo._0degree();
    delay(1000);

    servo._90degree();
    delay(1000);

    servo._180degree();
    delay(1000);
}