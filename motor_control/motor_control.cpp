#include "motor_control.h"
#include "Arduino.h"

void Motor::setup(){
    //Setup digital pins as output pins
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);

    //Set pins on LOW
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
}

Motor::Motor(int pA, int pB):
    pinA(pA), pinB(pB){
    setup();
}

//method for motor to spin clockwise
void Motor::spinClock(){
    digitalWrite(pinB, LOW); //pinB stops sending signal
    digitalWrite(pinA, HIGH); //pinA starts sending signal
}

//method for motor to spin counter-clockwise
void Motor::spinCounter(){
    digitalWrite(pinA, LOW); //pinA stops sending signal
    digitalWrite(pinB, HIGH); //pinB starts sending signal
}

//method for motor to stop spinning altogether
void Motor::stall(){
    //Set both of pins connected to motor LOW
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
}
