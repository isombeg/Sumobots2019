#ifndef ULTRASONIC_H_INCLUDED
#define ULTRASONIC_H_INCLUDED

class ultrasonic{
private:
    int trig, echo;
    void setup();

public:
    ultrasonic(int pinTrig, int pinEcho);
    double read();
    int assess();

};


#endif // ULTRASONIC_H_INCLUDED
