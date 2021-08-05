#include <Stepper.h>
const int stepsPerRevolution = 200; 
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
  char t;
void setup() {
  myStepper.setSpeed(60);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
  t = Serial.read();
  Serial.println(t);}

  if(t == 'F'){
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(5000); 
  }
  
  else if(t == 'B'){
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(5000);
  
  }
}
