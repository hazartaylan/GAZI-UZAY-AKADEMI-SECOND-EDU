#include <Servo.h>  
int potPin = A0; 
Servo servo1;  
int pos = 0;   
void setup() {
  servoM.attach(9);  
}
void loop() {
  pos = analogRead(potPin);
  pos = map(pos, 0, 1023, 0, 180);
  servo1.write(pos);              
  delay(20);    
}
