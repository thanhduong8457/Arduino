#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define rotate_plus 9
#define rotate_minus 10
LiquidCrystal_I2C lcd(0x27, 16, 2);
int count = 0;
void countting(){
  if (digitalRead(4)==1)
    count--;
  else
    count++;
  }
void rotate(int sign){
  if (sign>=0){
    analogWrite(rotate_minus,0);
    analogWrite(rotate_plus,sign);
  }
  if (sign<0){
    analogWrite(rotate_plus,0);
    analogWrite(rotate_minus,sign);
  }
  }
void setup() {
  // put your setup code here, to run once:
  attachInterrupt(0,countting,RISING);
  //Serial.begin(9600);
  lcd.init(); //SCL A5; SDA A4
  lcd.backlight();
  lcd.clear();  
}
void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(count);
  //lcd.clear();
  //delay(50);
  //lcd.print(count);
  //delay(50);

  //if (count>5){
    //rotate(-80);
   // }
  //else if (count<-5){
  //  rotate(80);
   // }
   rotate(200);
}
