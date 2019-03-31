#include "ultrasonic.h"
#include "Arduino.h"
#define RING_DIAMETER 74

void ultrasonic::setup(){
    pinMode (trig, OUTPUT);
    digitalWrite(trig, LOW);
    Serial.println("Setup Working");

}

ultrasonic::ultrasonic(int pinTrig, int pinEcho):
    trig(pinTrig), echo(pinEcho){
    setup();
}

double ultrasonic::read(){
    unsigned long t1, t2;
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);

    while(digitalRead(echo) == 0);

    t1 = micros();
    while(digitalRead(echo) == 1);
    t2 = micros();
    return (t2-t1)/58.0;
}

bool ultrasonic::assess(){
    return read() < RING_DIAMETER;
}
