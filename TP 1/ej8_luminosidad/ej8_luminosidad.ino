#define ldr A0
#define rojo 4
#define azul 5
#define verde 6

void setup()
{
  Serial.begin(9600);
  pinMode(ldr, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  int brillo = analogRead(ldr);
  Serial.println(brillo);
  delay(300);
  if (brillo > 90){
    analogWrite(rojo,255);
    delay(100);
  }
  else if (brillo > 70){
    analogWrite(rojo,170);
    delay(100);
  }
  else if (brillo > 40){
    analogWrite(rojo,100);
    delay(100);
  }
  else if (brillo > 20){
    analogWrite(rojo,50);
    delay(100);
  }
  else {
    analogWrite(rojo, LOW);
  }
}