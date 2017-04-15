#ifndef CustomServo_h
#define CustomServo_h

#include "Arduino.h"
#include "Servo.h"

class CustomServo {
    public:
        CustomServo();
        void init(int port);
        void _90degree();
        void _0degree();
        void _180degree();
    
    private:
        Servo servo;
};

#endif