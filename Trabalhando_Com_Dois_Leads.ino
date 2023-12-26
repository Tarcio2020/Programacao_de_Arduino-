int ledAzul = 3;
int ledLaranja = 4;

void setup()
{
  pinMode(ledAzul, OUTPUT);
  pinMode(ledLaranja, OUTPUT);

  
}

void loop()
{
  int time = 200;
  digitalWrite(ledAzul, HIGH);
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(ledLaranja, LOW);
  delay(time); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledAzul, LOW);
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(ledLaranja, HIGH);
  delay(time);
}