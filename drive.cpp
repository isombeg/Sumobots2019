#include "drive.h"
#include "motor_control.h"
#include "Arduino.h"

Drive::Drive(int A_pinA, int A_pinB, int B_pinA, int B_pinB) :
    lMotor(A_pinA, A_pinB), rMotor(B_pinA, B_pinB){}

Drive::Drive(int A_pinA, int A_pinB, int B_pinA, int B_pinB){
    lMotor (A_pinA, A_pinB);
    rMotor (B_pinA, B_pinB);
}

void Drive::cw_s_Pivot(){
    lMotor.spinCounter();
    rMotor.spinCounter();
}

void Drive::ccw_s_Pivot(){
    lMotor.spinClock();
    rMotor.spinClock();
}

void Drive::cw_d_Pivot(){
    rMotor.stall();
    lMotor.spinCounter();
}

void Drive::ccw_d_Pivot(){
    lMotor.stall();
    rMotor.spinClock();
}

void Drive::forwardDrive(){
    lMotor.spinCounter();
    rMotor.spinClock();
}

void Drive::backDrive(){
    lMotor.spinClock();
    rMotor.spinCounter();
}

void Drive::stall(){
    lMotor.stall();
    rMotor.stall();
}

void Drive::s_Pivot(int dir){
    if(dir == 1) cw_s_Pivot();
    else ccw_s_Pivot();
}

void Drive::d_Pivot(int dir){
    if(dir == 1) cw_d_Pivot();
    else ccw_d_Pivot();
}
