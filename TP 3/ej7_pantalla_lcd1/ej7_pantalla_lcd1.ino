#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define trig 9
#define echo 10
long duracion, distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  lcd.begin(16, 2);
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

  lcd.setCursor(0,0);
  lcd.print("Distancia: ");
  lcd.setCursor(10,0);
  lcd.print(distancia);
  
  
}
 