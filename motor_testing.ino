#include <constants.h>
void setup() {
//  Serial.begin(9600);
//  delay(5000); // beginning delay
//  while(qrd1->assess() != true && qrd2->assess() != true)
//  {
//    drive->forwardDrive();
//    delay(500);
//  }
//  Serial.println("Left while loop");
//  drive->s_Pivot(1);
//  delay(3000);
//  drive->stall();
}

void loop() {
  if(qrd1->assess() != true && qrd2->assess() != true)
  {
    if(uss->assess()){
      drive->forwardDrive();
      delay(200);
    }
    else
    {
      drive->s_Pivot(1);
      delay(500);
    }
  }
  else
  {
    if(qrd1->assess() == true && qrd2->assess() == false)
    {
      drive->cw_d_Pivot();
      delay(3000);
      drive->forwardDrive();
      delay(500);
    }
    else if(qrd1->assess() == false && qrd2->assess() == true)
    {
      drive->ccw_d_Pivot();
      delay(3000);
      drive->forwardDrive();
      delay(500);
    }
    else
    {
      drive->backDrive();
      delay(1000);
      drive->s_Pivot(1);
      delay(3000);
    }    
    if(uss->read()<10)
    {
      drive->ccw_d_Pivot_b();
      delay(2000);
    }
  }
}
