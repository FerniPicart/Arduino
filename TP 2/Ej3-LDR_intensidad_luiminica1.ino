#define rojo 3
#define ldr A0

void setup()
{
  Serial.begin(9600);
  pinMode(ldr, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  int luz = analogRead(ldr);
  Serial.print("Luminosidad ");
  Serial.println(luz);
  delay(200);
  
  if (luz < 50){
    analogWrite(rojo,255);
    delay(733);
    analogWrite(rojo,LOW);
    delay(733);
  }
  
}