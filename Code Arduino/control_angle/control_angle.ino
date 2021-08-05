#define clockwise 9;
#define counter_clockwise 10;
int count = 0;
void rotate(int sign){
  if (sign > 0){
    
  }
}
void count(){
  if (digitalRead(4)==1){
    count++;
  }
  else
    count--;
}
void setup(){
  // put your setup code here, to run once:
attachInterrupt(0,count,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:

}
