int pot;
int led = 3;
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;
int led7 = 10;
int led8 = 11;
int led9 = 12;
int led10 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop() {
  pot = analogRead(A1);
  Serial.println(pot);

  // Desliga todos os LEDs antes de ligar o necessário
  for (int i = led; i <= led10; i++) {
    digitalWrite(i, LOW);
  }

  if (pot >= 100) {
    digitalWrite(led9, HIGH);
  }
  if (pot >= 200) {
    digitalWrite(led8, HIGH);
  }
  if (pot >= 300) {
    digitalWrite(led7, HIGH);
  }
  if (pot >= 400) {
    digitalWrite(led6, HIGH);
  }
  if (pot >= 500) {
    digitalWrite(led5, HIGH);
  }
  if (pot >= 600) {
    digitalWrite(led4, HIGH);
  }
  if (pot >= 700) {
    digitalWrite(led3, HIGH);
  }
  if (pot >= 800) {
    digitalWrite(led2, HIGH);
  }
  if (pot >= 900) {
    digitalWrite(led1, HIGH);
  }
  if (pot >= 1000) {
    digitalWrite(led, HIGH);
  }

  delay(25);
}
