#define tilt 11
#define rojo 3

void setup()
{
  Serial.begin(9600);
  pinMode(tilt, INPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{
  int valor = digitalRead(tilt);
  Serial.println(valor);
  if(valor == 1){
    inclinado();
  }
  else
    normal();
}

// si el sensor se inclina, titilan las luces.
void inclinado(){
  analogWrite(rojo, 200); 
  delay(500);
  analogWrite(rojo, LOW); 
  delay(500);
}

// si el sensor queda estable, las lucen no encenderan.
void normal(){
  analogWrite(rojo, LOW); 
}