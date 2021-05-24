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
    analogWrite(rojo, 255);//A menos de 5 cm rojo intenso.
    delay(100);
  }
  else if (distancia < 20){
    analogWrite(rojo, 130);//A menos de 10 rojo medio
    delay(100);
  }
  else if (distancia < 50){
    analogWrite(rojo, 60);//A menos de 25 rojo tenue
    delay(100);
  }
  else{
    analogWrite(rojo, LOW);//A mas de 25, Apagado
    delay(100);
  }
}