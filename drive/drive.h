#ifndef DRIVE_H_INCLUDED
#define DRIVE_H_INCLUDED

#include "motor_control.h"

class Drive{
private:
    Motor *lMotor, *rMotor; //motor A, motor B
    void setup();
    void cw_s_Pivot();
    void ccw_s_Pivot();
    void cw_d_Pivot();
    void ccw_d_Pivot();
public:
    Drive(int A_pinA, int A_pinB, int B_pinA, int B_pinB);
    void forwardDrive();
    void backDrive();
    void stall();
    void s_Pivot(int dir);
    void d_Pivot(int dir);
};

#endif // DRIVE_H_INCLUDED
