int motor_controller=A5;  // joystick
int motor=5;  
int hiz;  

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  hiz= analogRead(motor_controller); 
  hiz= map(hiz, 511, 0, 0, 255);  // OKUNAN 5 VOLT İLE 0 VOLT ARASINDAKİ VOLTAJI HIZA DÖNÜŞTÜR
  analogWrite(motor, hiz);  // HESAPLANAN HIZI MOTORA AKTAR
  delay(15); 
}
