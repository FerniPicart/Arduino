#define red 13
#define green 12
#define yellow 11
#define tiempoPrendido 2000 //2 segundos
#define tiempoApagado 200

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
	// rojo  
	digitalWrite(red, HIGH);
  	delay(tiempoPrendido);
    digitalWrite(red, LOW);
	delay(tiempoApagado);
  	// verde
    digitalWrite(green, HIGH);
	delay(tiempoPrendido);
	digitalWrite(green, LOW);
	delay(tiempoApagado);
  	// amarillo
    digitalWrite(yellow, HIGH);
	delay(tiempoPrendido);
	digitalWrite(yellow, LOW);
	delay(tiempoApagado);
}