#ifndef MOTOR_CONTROL_H_INCLUDED
#define MOTOR_CONTROL_H_INCLUDED

class Motor{
private:
    int pinA, pinB;
    void setup();
public:
    Motor(int pA, int pB);
    void spinClock();
    void spinCounter();
    void stall();
    void spinClockWeak();
    void spinCounterWeak();
};

#endif // MOTOR_CONTROL_H_INCLUDED
