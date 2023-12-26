int ledUm = 3;   // Defino o pino digital 3 com o nome de led
int ledDois = 6; // Defino o pino digital 6 com o nome de led
int ledTres = 12; // Defino o pino digital 12 com o nome de led

void setup() {
  pinMode(ledUm, OUTPUT);   // Define o led pino 3 como uma saída
  pinMode(ledDois, OUTPUT); // Define o led pino 6 como uma saída
  pinMode(ledTres, OUTPUT); // Define o led pino 12 como uma saída
}

void loop() {
  digitalWrite(ledUm, HIGH); // Liga a saída digital ledUm
  digitalWrite(ledDois, LOW); // desliga a saída digital ledDois
  digitalWrite(ledTres, LOW); // desliga a saída digital ledDois
  delay(10000); // Pausa de 10 segundos
  
  digitalWrite(ledUm, LOW); // Liga a saída digital ledUm
  digitalWrite(ledDois, HIGH); // desliga a saída digital ledDois
  digitalWrite(ledTres, LOW); // Liga a saída digital ledDois
  delay(3000); // Pausa de 3 segundos  delay(3000); // Pausa de 3 segundos


  digitalWrite(ledUm, LOW); // Liga a saída digital ledUm
  digitalWrite(ledDois, LOW); // desliga a saída digital ledDois
  digitalWrite(ledTres, HIGH); // Liga a saída digital ledDois  delay(15000); // Pausa de 15 segundos
  delay(18000); // Pausa de 18 segundos  delay(3000); // Pausa de 3 segundos

}