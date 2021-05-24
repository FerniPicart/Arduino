#define red 13
#define green 12
#define yellow 11
#define tiempoPrendido 2000 //2 segundos
#define tiempoApagado 200
int i;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
  for (i=1; i<10; i++)
  {
    if (i == 1 or i == 3 or i == 7)
    {
      digitalWrite(red, HIGH);
  	  delay(tiempoPrendido);
  	  digitalWrite(red, LOW);
  	  delay(tiempoApagado);
    }
    else if (i == 0 or i == 2 or i == 8)
    {
      digitalWrite(green, HIGH);
	  delay(tiempoPrendido);
	  digitalWrite(green, LOW);
	  delay(tiempoApagado);
    }
    else if (i == 4 or i == 5 or i == 9)
    {
      digitalWrite(yellow, HIGH);
	  delay(tiempoPrendido);
	  digitalWrite(yellow, LOW);
	  delay(tiempoApagado);
    }
  }
}