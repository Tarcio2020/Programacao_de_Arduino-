int botao;

void setup()
{
  pinMode(3, INPUT); //define o 3 como entrada de informação
  Serial.begin(9600); //ligo o monitor serial
}

void loop()
{
 botao = digitalRead(3); //retorna valor 0 e 1
 Serial.println(botao);  //printa no serial monitor o valor da variável botao em coluna
 delay(100); //delay para a informacao do monitor serial ficar mais visivel 
}