int led = 3; //defino o pino digital 3 com o nome de led

void setup() {
  pinMode(led, OUTPUT); //define o led pino 3 como uma saída
  
}

void loop() {
  digitalWrite(led, HIGH); //liga a saída digital led
  delay(2000); //pausa de 2segundos
  digitalWrite(led, LOW); //desliga a saída digital led
  delay(1000); //pausa de 1segundos
}
