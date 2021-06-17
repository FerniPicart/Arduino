#define trig 10
#define echo 11
#define buzzer 8
int distancia, duracion;

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
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
  delay(200);
  
  rangoDistancia();
}

// controla rango distancia del objeto y emite sonido
void rangoDistancia()
{
  if (distancia < 10){
    digitalWrite(buzzer, HIGH);
    delay(10);
    digitalWrite(buzzer, LOW);
    delay(10);
  }
  else if (distancia < 25){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  else if (distancia < 50){
    digitalWrite(buzzer, HIGH);
    delay(400);
    digitalWrite(buzzer, LOW);
    delay(400);
  }
  else if (distancia < 75){
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }
  else{
    digitalWrite(buzzer, LOW);
    delay(10);
  }
  
}