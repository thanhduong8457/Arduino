void setup() {
pinMode(2, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
pinMode(4, INPUT_PULLUP);
pinMode(5, INPUT_PULLUP);
pinMode(6, INPUT_PULLUP);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);}
void loop() {
int L= digitalRead(2);
int AL= digitalRead(3);
int M= digitalRead(4);
int AR= digitalRead(5);
int R= digitalRead(6);
if (L==LOW && AL==LOW && M==LOW && AR==LOW && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==LOW && M==LOW && AR==LOW && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==LOW && M==LOW && AR==HIGH && R==LOW){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==LOW && M==LOW && AR==HIGH && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==LOW && M==HIGH && AR==LOW && R==LOW){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==LOW && AL==LOW && M==HIGH && AR==LOW && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==LOW && M==HIGH && AR==HIGH && R==LOW){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==LOW && M==HIGH && AR==HIGH && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==LOW && AR==LOW && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==LOW && AR==LOW && R==HIGH){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==LOW && AR==HIGH && R==LOW){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==LOW && AR==HIGH && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==HIGH && AR==LOW && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==HIGH && AR==LOW && R==HIGH){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==HIGH && AR==HIGH && R==LOW){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==LOW && AL==HIGH && M==HIGH && AR==HIGH && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
    else if (L==HIGH && AL==LOW && M==LOW && AR==LOW && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==LOW && M==LOW && AR==LOW && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==LOW && M==LOW && AR==HIGH && R==LOW){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==LOW && M==LOW && AR==HIGH && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==LOW && M==HIGH && AR==LOW && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==LOW && M==HIGH && AR==LOW && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==LOW && M==HIGH && AR==HIGH && R==LOW){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==LOW && M==HIGH && AR==HIGH && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==HIGH && M==LOW && AR==LOW && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==HIGH && M==LOW && AR==LOW && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==HIGH && M==LOW && AR==HIGH && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==HIGH && M==LOW && AR==HIGH && R==HIGH){
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==HIGH && M==HIGH && AR==LOW && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==HIGH && M==HIGH && AR==LOW && R==HIGH){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else if(L==HIGH && AL==HIGH && M==HIGH && AR==HIGH && R==LOW){
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, HIGH);
digitalWrite(10, LOW);}
else{
digitalWrite(7, HIGH);
digitalWrite(8, LOW);
digitalWrite(9, LOW );
digitalWrite(10, LOW);}}
