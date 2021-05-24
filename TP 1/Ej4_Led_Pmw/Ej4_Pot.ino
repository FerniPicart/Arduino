#define led 11
#define pot A0

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){
  int val = map(analogRead(pot), 0, 1023, 0, 255);
  Serial.println(val);
  delay(50);
  analogWrite(led,val);
}
 
