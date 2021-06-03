#define rojo 4
#define azul 5
#define verde 6
#define pir 13

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(pir, INPUT);
}
 
void loop(){
  int val = digitalRead(pir);
  // si detecta objeto cercano prende luz roja.
  if (val == HIGH) {
    Serial.println(val);
    Serial.println("Objeto cercano.");
    analogWrite(rojo,250);
    delay(300);
    analogWrite(rojo,LOW);
    delay(300);
  } 
  // Si no hay objeto, prende luz azul.
  else {
    Serial.println(val);
    analogWrite(azul,250);
    delay(300);
    analogWrite(azul,LOW);
    delay(300);
  }
}