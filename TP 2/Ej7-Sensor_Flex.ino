#define rojo 3
#define verde 5
#define flex A0
int fuerza,resistencia;

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(flex, INPUT);
}

void loop()
{
  fuerza = (analogRead(flex)-767)*1.2; //resto para que me de el valor desde cero a 255
  Serial.print("Fuerza ");
  Serial.println(fuerza);
  analogWrite(rojo, fuerza); // enciende el led de fuerza con el valor
  
  resistencia = (255-fuerza);
  Serial.print("Resistencia ");
  Serial.println(resistencia);
  analogWrite(verde, (resistencia));
  delay(1000);
}