#define rojo 6
#define verde 3
#define azul 5
#define pot1 A0
#define pot2 A1
#define pot3 A2

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  
  //por ROJO
  int val_1 = map(analogRead(pot1), 0, 1023, 0, 255);
  Serial.println(val_1);
  delay(500);
  analogWrite(rojo, val_1);
  
  // pot VERDE
  int val_2 = map(analogRead(pot2), 0, 1023, 0, 255);
  Serial.println(val_2);
  delay(500);
  analogWrite(verde, val_2);
  
  // pot AZUL
  int val_3 = map(analogRead(pot3), 0, 1023, 0, 255);
  Serial.println(val_3);
  delay(500);
  analogWrite(azul, val_3);

}

/*
void loop()
{
  
  CambiarColor();
}



void CambiarColor()
{
  for (int i=50; i<255; i+=50)
  {
    analogWrite(rojo, i); //rojo
    delay(800);
    analogWrite(rojo, LOW);
    
    analogWrite(verde,i); //verde
    delay(800);
	analogWrite(verde, LOW);
    
    analogWrite(azul,i); //azul
    delay(800);
    analogWrite(azul, LOW);
    
    analogWrite(rojo, i);
    analogWrite(verde,i); //amarillo
    delay(800);
    analogWrite(rojo, LOW);
    analogWrite(verde, LOW);
    
    analogWrite(rojo, i); //violeta
    analogWrite(azul,i);
    delay(800);
    analogWrite(rojo, LOW);
    analogWrite(verde, LOW);
    
    analogWrite(verde, i); //celeste
    analogWrite(azul,i);
    delay(800);
    analogWrite(verde, LOW); 
    analogWrite(azul,LOW);
    
    analogWrite(rojo, 255);
    analogWrite(verde, i); 
    analogWrite(azul,i);
    delay(800);
    analogWrite(rojo, LOW);
    analogWrite(verde, LOW); 
    analogWrite(azul,LOW);
    
    analogWrite(rojo, i);
    analogWrite(verde, 255); 
    analogWrite(azul,i);
    delay(800);
    analogWrite(rojo, LOW);
    analogWrite(verde, LOW); 
    analogWrite(azul,LOW);
    
    analogWrite(rojo, i);
    analogWrite(verde, i); 
    analogWrite(azul,255);
    delay(800);
    analogWrite(rojo, LOW);
    analogWrite(verde, LOW); 
    analogWrite(azul,LOW);
    delay(1500);
  }
}
*/