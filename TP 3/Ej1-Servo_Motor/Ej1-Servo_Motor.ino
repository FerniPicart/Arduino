#include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(5);
}

void loop()
{
  for (int i=0; i<180; i+=20) {
    servo.write(i);
    delay(700);
  }
  for (int i=180; i>0; i-=20) {
    servo.write(i);
    delay(700);
  }
}