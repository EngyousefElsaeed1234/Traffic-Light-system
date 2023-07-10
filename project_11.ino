int Green = 11;
int Yellow = 12;
int Red = 13;
  void setup(){
  pinMode(Red,OUTPUT);
pinMode(Yellow,OUTPUT);
    pinMode(Green,OUTPUT);}
    void loop()
    {
digitalWrite(Red,HIGH); 
      delay(500);
  digitalWrite(Yellow,HIGH);
   delay(500);
   digitalWrite(Yellow,LOW);
   delay(500);
   digitalWrite(Yellow,HIGH);
   delay(500);
  digitalWrite(Yellow,LOW);
   delay(500);
 digitalWrite(Yellow,HIGH);
   delay(500);
  digitalWrite(Yellow,LOW);
   delay(500);
       digitalWrite(Red,LOW);
  digitalWrite(Green,HIGH);
      delay(500);
      digitalWrite(Green,LOW);
}
  