#include <RepStepper.h>

RepStepper *myStepper;

void setup() {
  // put your setup code here, to run once:

  myStepper = new RepStepper(50,4,3,5);
  myStepper->setRPM(35);
  myStepper->enable();
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper->pulse();
  delay(.5);
}
