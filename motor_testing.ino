#include <constants.h>
void setup() {
  Serial.begin(9600);
  delay(5000);
  while(qrd1->assess() == false && qrd2->assess() == false)
  {
    drive->forwardDrive();  
  }
}

void loop() {

  delay(60);
}
