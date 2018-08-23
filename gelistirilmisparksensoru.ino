int green_pin1=2; 
int green_pin2=3; 
int yellow_pin1=4; 
int yellow_pin2=5; 
int red_pin1=6; 
int red_pin2=7; 
int trig=10;
int echo=11;
long distance;
long duration;
int buzzer=12;

void setup() {
  // put your setup code here, to run once:
pinMode(green_pin1,OUTPUT);
pinMode(green_pin2,OUTPUT);
pinMode(yellow_pin1,OUTPUT);
pinMode(yellow_pin2,OUTPUT);
pinMode(red_pin1,OUTPUT);
pinMode(red_pin2,OUTPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(buzzer,OUTPUT);


Serial.begin(9600); 



}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
duration=pulseIn(echo,HIGH);
distance=duration *0.034/2;
Serial.println(distance);
if (distance < 25)
{
  digitalWrite(green_pin1,HIGH);
  digitalWrite(green_pin2,HIGH);
  digitalWrite(yellow_pin1,HIGH);
  digitalWrite(yellow_pin2,HIGH);
  digitalWrite(red_pin1,HIGH);
  digitalWrite(red_pin2,HIGH);
  tone(buzzer,2500);
  delay(50);
  noTone(buzzer);
  delay(50);
  
  }
  
else if (distance < 50){
  digitalWrite(green_pin1,HIGH);
  digitalWrite(green_pin2,HIGH);
  digitalWrite(yellow_pin1,HIGH);
  digitalWrite(yellow_pin2,HIGH);
  digitalWrite(red_pin1,HIGH);
  digitalWrite(red_pin2,LOW);
 
  tone(buzzer,2500);
  delay(100);
  noTone(buzzer);
  delay(100);
}
else if (distance < 75){
  digitalWrite(green_pin1,HIGH);
  digitalWrite(green_pin2,HIGH);
  digitalWrite(yellow_pin1,HIGH);
  digitalWrite(yellow_pin2,HIGH);
  digitalWrite(red_pin1,LOW);
  digitalWrite(red_pin2,LOW);  
  tone(buzzer,2500);
  delay(150);
  noTone(buzzer);
  delay(150);
}
else if (distance < 100){
  digitalWrite(green_pin1,HIGH);
  digitalWrite(green_pin2,HIGH);
  digitalWrite(yellow_pin1,HIGH);
  digitalWrite(yellow_pin2,LOW);
  digitalWrite(red_pin1,LOW);
  digitalWrite(red_pin2,LOW);  
  tone(buzzer,2500);
  delay(200);
  noTone(buzzer);
  delay(200);
}
else if (distance < 125){
  digitalWrite(green_pin1,HIGH);
  digitalWrite(green_pin2,HIGH);
  digitalWrite(yellow_pin1,LOW);
  digitalWrite(yellow_pin2,LOW);
  digitalWrite(red_pin1,LOW);
  digitalWrite(red_pin2,LOW);
  tone(buzzer,2500);
  delay(250);
  noTone(buzzer);
  delay(250);
}
else if(distance < 150){
  digitalWrite(green_pin1,HIGH);
  digitalWrite(green_pin2,LOW);
  digitalWrite(yellow_pin1,LOW);
  digitalWrite(yellow_pin2,LOW);
  digitalWrite(red_pin1,LOW);
  digitalWrite(red_pin2,LOW);   
  tone(buzzer,2500);
  delay(300);
  noTone(buzzer);
  delay(300);
}

else{
  noTone(buzzer);}
    digitalWrite(green_pin1,LOW);
  digitalWrite(green_pin2,LOW);
  digitalWrite(yellow_pin1,LOW);
  digitalWrite(yellow_pin2,LOW);
  digitalWrite(red_pin1,LOW);
  digitalWrite(red_pin2,LOW);
}
