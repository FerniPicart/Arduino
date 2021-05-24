#define trig 10
#define echo 9
#define led 3

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  int duracion = pulseIn(echo, HIGH);
  
  // calcula la DISTANCIA
  //int distancia = (duracion / 58.2);
  int distancia = (duracion*0.034/2);
  Serial.print("Distancia ");
  Serial.print(distancia);
  Serial.println(" cm.");
  delay(100);
  
  // prende y apaga led segun la cercania
  if ((distancia <= 100) && (distancia >= 0)){
    digitalWrite(led, 255);
    delay(distancia*10);
    digitalWrite(led, LOW);
  }
}