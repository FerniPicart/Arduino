#include <Servo.h>

#define pot A1
Servo servo;
int val;

void setup()
{
  Serial.begin(9600);
  servo.attach(5);
  pinMode(pot, INPUT);
}

void loop()
{
  val = map(analogRead(pot), 0, 1023, 0, 180);
  Serial.println(val);
  servo.write(val);
  delay(500);
}