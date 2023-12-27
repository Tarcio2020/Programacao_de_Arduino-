//****AO APERTAR O BOTÃO LIGA O LED****//

int botao;
int led = 4; //atribui um nome para o pino 4

void setup()
{
  pinMode(4, OUTPUT); //define o 4 como saída de informação
  pinMode(3, INPUT); //define o 3 como entrada de informação
  Serial.begin(9600); //ligo o monitor serial
}

void loop()
{
 botao = digitalRead(3); //retorna valor 0 e 1
 Serial.println(botao);  //printa no serial monitor o valor da variável botao em coluna

  if(botao == 1) {
  	digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  
}