#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void displaytime(int a, int b, int c, int d,int e,int f);
void setup(){  
  lcd.init(); //SCL A5; SDA A4
  lcd.backlight();  
}
void loop(){
  int i,j,k,z,l,m,n;
  n=-1;
  for(i=0;i<3;i++){    
    for(j=0;j<10;j++){
      n++;
      if(n==24){
      i=0;
      j=0;
      n=0;}
      for(z=0;z<6;z++){      
        for(k=0;k<10;k++){        
           for(l=0;l<6;l++){       
              for(m=0;m<10;m++){         
                displaytime(i,j,z,k,l,m);     
              }
           }    
        }
      }  
    }   
   } 
  }
 void displaytime(int a, int b, int c, int d,int e,int f){ 
    lcd.clear();
    lcd.setCursor (2,0);
    lcd.print("time display");
    lcd.setCursor (4,1);
    lcd.print(a);
    lcd.print(b);
    lcd.print(":");
    lcd.print(c);
    lcd.print(d);
    lcd.print(":");
    lcd.print(e);
    lcd.print(f);
    delay(1000);
 }
