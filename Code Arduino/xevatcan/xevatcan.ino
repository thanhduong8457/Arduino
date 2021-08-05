#include <Servo.h>
Servo myservo;  
int pos = 0;    

const int trig = 6;    
const int echo = 5;     
int tien1=10;           
int tien2=11;          
int lui1=12;            
int lui2=13;           
int dongcoservo=9;     

int gioihan = 4;
unsigned long thoigian; 
int khoangcach;          
int khoangcachtrai,khoangcachphai;

void dokhoangcach();
void dithang(int duongdi);
void disangtrai();
void disangphai();
void dilui();
void resetdongco();
void quaycbsangphai();
void quaycbsangtrai();
void setup()
{

    myservo.attach(9);  
    pinMode(trig,OUTPUT);  
    pinMode(echo,INPUT);    
    pinMode(tien1,OUTPUT); 
    pinMode(tien2,OUTPUT);
    pinMode(lui1,OUTPUT);
    pinMode(lui2,OUTPUT);
    digitalWrite(tien1,LOW);
    digitalWrite(tien2,LOW);
    digitalWrite(lui1,LOW);
    digitalWrite(lui2,LOW);
    myservo.write(90);    
    delay(500);
    
}

void loop() 
{   
    khoangcach=0;
    dokhoangcach();
    if(khoangcach>gioihan||khoangcach==0) 
    {
      dokhoangcach();
       if(khoangcach>gioihan||khoangcach==0) 
        {
          dithang();   
        }   
    }
    else
    {
      
      resetdongco();
      quaycbsangtrai();
      
      khoangcachtrai=khoangcach;
     
      quaycbsangphai();
      khoangcachphai=khoangcach;
      if(khoangcachphai<gioihan&&khoangcachtrai<gioihan)
      {
        dilui();
      }
      else
      {
        if(khoangcachphai>khoangcachtrai) 
        {
          disangphai();
          delay(500);
        }
        if(khoangcachphai<khoangcachtrai) 
        {
          disangtrai();
          delay(500);
        }
      }
    }
}
void dithang()
{ 
  
    
        digitalWrite(tien1,HIGH);
        digitalWrite(tien2,HIGH);
        //delay(2);
   
}

void disangtrai()
{
  resetdongco();
  digitalWrite(tien1,HIGH);
  delay(400);
  digitalWrite(tien2,LOW);
}
  
  
void disangphai()
{
   resetdongco();
  digitalWrite(tien2,HIGH);
  delay(400);
  digitalWrite(tien1,LOW);
}


void dilui()
{
  resetdongco();
   digitalWrite(lui1,HIGH);
   digitalWrite(lui2,HIGH);
   delay(700);
   digitalWrite(lui1,LOW);
   digitalWrite(lui2,LOW);
}

void resetdongco()
{
  digitalWrite(tien1,LOW);
  digitalWrite(tien2,LOW);
  digitalWrite(lui1,LOW);
  digitalWrite(lui2,LOW);
}

void dokhoangcach()
{

    digitalWrite(trig,0);  
    delayMicroseconds(2);
    digitalWrite(trig,1);   
    delayMicroseconds(10);   
    digitalWrite(trig,0);   
    
    
    
    thoigian = pulseIn(echo,HIGH);  
    khoangcach = int(thoigian/2/29.412);
    

}


void quaycbsangtrai()
{
    myservo.write(180);              
    delay(1000);
    dokhoangcach();
    myservo.write(90);              
}
void quaycbsangphai()
{
    myservo.write(0);              
    delay(1000);
    dokhoangcach();
    myservo.write(90);            
}
void resetservo()
{
   myservo.write(90);
}
