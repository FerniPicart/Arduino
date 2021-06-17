#include <Servo.h>

Servo servo;
int val;

void setup()
{
  Serial.begin(9600);
  servo.attach(5);
}

void loop()
{
  servo.write(0);
  
  // Mov random
  for (int i=0; i<3; i++) {
    val = random(1,180);
    servo.write(val);
    delay(1000);
  }
  
  Serial.println(val);
  
  // Movimientos 0, 180 y 90
  servo.write(0);
  delay(1500);
  servo.write(180);
  delay(1500);
  servo.write(90);
  delay(1500);
}