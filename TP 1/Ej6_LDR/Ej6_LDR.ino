#define ldr A1

void setup()
{
  Serial.begin(9600);
  pinMode(ldr, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(ldr));
  delay(300);
}