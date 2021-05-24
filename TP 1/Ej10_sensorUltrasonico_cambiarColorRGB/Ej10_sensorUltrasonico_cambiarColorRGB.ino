#define rojo 3
#define azul 4
#define verde 5
#define trig 9
#define echo 10
long duracion, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duracion = pulseIn(echo, HIGH);
  
  // calcula la DISTANCIA
  distancia = (duracion*0.034/2);
  Serial.print("Distancia ");
  Serial.print(distancia);
  Serial.println(" cm.");
  delay(100);
  
  //Cuestiono la distancia:
  if (distancia < 10){
    analogWrite(rojo, 255);//A menos de 10 cm rojo.
    analogWrite(verde, LOW);
    analogWrite(azul, LOW);
    delay(100);
  }
  else if (distancia < 20){
    analogWrite(rojo, 255);//A menos de 20 naranja.
    analogWrite(verde, 150);
    analogWrite(azul, 40);
    delay(100);
  }
  else if (distancia < 50){
    analogWrite(rojo, 250);//A menos de 50 Amarillo.
    analogWrite(verde, 250);
    analogWrite(azul, LOW);
    delay(100);
  }
  else{
    analogWrite(rojo, LOW);//A mas de 50, Apagado.
    analogWrite(verde, LOW);
    analogWrite(azul, LOW);
    delay(100);
  }
}