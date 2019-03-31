#include "qrd.h"
#include "Arduino.h"

void qrd::setup(){
    pinMode(pinA, INPUT);
}

qrd::qrd(int pinA1, int pin1):
    pinA(pinA1), pin(pin1){
    setup();
}

int qrd::read(){
    return analogRead(pin);
    // int current will be returned from the pin
    // need to calculate the threshold values for how much current to be allowed to determine range
    // tests required
}

bool qrd::assess(){  // returns 1 if it is on the line, otherwise returns 0 if it is not
    if(this->read() <= 100)
        return true;
    return false;
}
