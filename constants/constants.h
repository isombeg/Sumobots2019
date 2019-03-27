#ifndef CONSTANTS_H_INCLUDED
#define CONSTANTS_H_INCLUDED

#include "drive.h"
#include "motor_control.h"
#include "ultrasonic.h"
#include "qrd.h"
#include "qrd_network.h"

/*File contains all constants being used
withing the project*/

//Pins the QRDs are connected to
#define U1 A0
#define U2 A1
#define U3 A3
#define U4 A2

//Use constant names for the QRDs when invoking analogWrite
#define U1_PIN 0
#define U2_PIN 1
#define U3_PIN 3
#define U4_PIN 2

//Pins connected to ultrasonic sensor
#define TRIG 2 //connected to digital 2
#define ECHO 3 //connected to digital 3

//Pins connected to the motors
#define MOTOR_A_1A 9
#define MOTOR_A_1B 8
#define MOTOR_B_1A 11
#define MOTOR_B_1B 10

//drive object
Drive* drive = new Drive(MOTOR_A_1A, MOTOR_A_1B, MOTOR_B_1A, MOTOR_B_1B);
ultrasonic* uss = new ultrasonic(TRIG,ECHO);
qrd* qrd1 = new qrd(U1,U1_PIN);
qrd* qrd2 = new qrd(U2,U2_PIN);
qrd* qrd3 = new qrd(U3,U3_PIN);
qrd* qrd4 = new qrd(U4,U4_PIN);
Qrd_Network* qrd_net = new Qrd_Network(qrd1, qrd2, qrd3, qrd4);

#endif // CONSTANTS_H_INCLUDED
