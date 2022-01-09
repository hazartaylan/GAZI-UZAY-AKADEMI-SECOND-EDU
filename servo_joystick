#include <Servo.h>
Servo servo1;
int deger;
int derece;
void setup() {
  servo1.attach(3);
}
void loop() {
  deger = analogRead(A0);
  derece = map(deger, 0, 1023, 0, 180);
  servo1.write(derece);
}
