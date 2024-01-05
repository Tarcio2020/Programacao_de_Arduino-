// alterar o estado do led apertando o botão
//Agora usando dois leds simultaneamente 
boolean saida = HIGH;
int led = 4; //Damos nomes aos pinos 3 e 4
int led2 = 5;
int botao = 3;


//
void setup(){
  pinMode(led, OUTPUT); //definição de saída 
  pinMode(led2, OUTPUT); //definição o segundo led como saída 
  pinMode(botao, INPUT); //definição de entrada
  Serial.begin(9600); //ligar o seríal monitor 

}

void loop(){
  int entrada = digitalRead(botao); //ler a entrada digital 
  
    if(entrada == 1) {
      saida = !saida;  // altera o estado do led
      digitalWrite(led, saida); //posto em led o valor da variável saída
      digitalWrite(led2, !saida); //postar em led dois o contratio da variável saída
      delay(500);
    }
  Serial.print("A entrada é: "); //print da entrada digital do botao
  Serial.print(entrada); //print da entrada digital do botao
  Serial.print("   A saida é: "); //print da entrada digital do botao
  Serial.println(saida); //print da entrada digital do botao

  delay(10);
}
