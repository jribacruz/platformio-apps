#include "Arduino.h"
#include "Servo.h"
#include "CustomServo.h"

CustomServo::CustomServo() {
}

void CustomServo::init(int port) {
    this->servo.attach(port);
}

void CustomServo::_0degree() {
    this->servo.write(0);
}

void CustomServo::_90degree() {
    this->servo.write(90);
}

void CustomServo::_180degree() {
    this->servo.write(180);
}