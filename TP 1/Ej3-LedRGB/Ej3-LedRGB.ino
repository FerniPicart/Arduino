#define rojo 11
#define azul 10
#define verde 9
#define tiempo 500
void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}
/*
void loop()
{
  // rojo
  analogWrite(rojo,200);
  delay(tiempo);
  analogWrite(rojo,LOW);
  delay(tiempo);
  // azul
  analogWrite(azul,200);
  delay(tiempo);
  analogWrite(azul,LOW);
  delay(tiempo);
  // verde
  analogWrite(verde,200);
  delay(tiempo);
  analogWrite(verde,LOW);
  delay(tiempo);
  // violeta
  analogWrite(rojo,200);
  analogWrite(azul,200);
  delay(tiempo);
  analogWrite(rojo,LOW);
  analogWrite(azul,LOW);
  delay(tiempo);
  // amarillo
  analogWrite(rojo,200);
  analogWrite(verde,200);
  delay(tiempo);
  analogWrite(rojo,LOW);
  analogWrite(verde,LOW);
  delay(tiempo);
  // celeste
  analogWrite(verde,200);
  analogWrite(azul,200);
  delay(tiempo);
  analogWrite(verde,LOW);
  analogWrite(azul,LOW);
  delay(tiempo);
  // blanco
  analogWrite(rojo,255);
  analogWrite(azul,255);
  analogWrite(verde,255);
  delay(tiempo);
  analogWrite(rojo,LOW);
  analogWrite(azul,LOW);
  analogWrite(verde,LOW);
  delay(tiempo);
}
*/

void loop()
{
  // R G B
  setColor(200,0,0);
  delay(700);
  setColor(0,200,0);
  delay(700);
  setColor(0,0,200);
  delay(700);
  // 2
  setColor(200,200,0);
  delay(700);
  setColor(200,0,200);
  delay(700);
  setColor(0,200,200);
  delay(700);
  setColor(255,255,255);
  delay(700);
  setColor(0,0,0);
  delay(1000);
}

void setColor(int red,int green,int blue){
  analogWrite(rojo, red);
  analogWrite(verde, green);
  analogWrite(azul, blue);
}



