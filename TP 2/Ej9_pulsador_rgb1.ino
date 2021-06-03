#define pul 2
#define rojo 9
#define azul 10
#define verde 11
int num;

void setup() {
  Serial.begin(9600);
  pinMode(pul, INPUT_PULLUP);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  int val = digitalRead(pul);
  Serial.println(val);
  // Genera un numero ramdomico.
  num = random(1, 4);
  Serial.println(num);
  delay(1000);
  
  // Prendera luz de color segun el numero generado.
  if (val == 1){
    if (num == 1) {
      digitalWrite(rojo, HIGH); //rojo
      delay(1000);
    } 
    else if (num == 2) {
      digitalWrite(azul, HIGH); //azul
      delay(1000);
    }
    else if (num == 3){
      digitalWrite(verde, HIGH); //verde
      delay(1000);
    }
    digitalWrite(rojo, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(verde, LOW);
  }
}