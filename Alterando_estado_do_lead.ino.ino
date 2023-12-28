// alterar o estado do led apertando o botão
boolean saida = HIGH;
int led = 4; //Damos nomes aos pinos 3 e 4
int botao = 3;


//
void setup(){
  pinMode(led, OUTPUT); //definição de saída 
  pinMode(botao, INPUT); //definição de entrada
  Serial.begin(9600); //ligar o seríal monitor 

}

void loop(){
  int entrada = digitalRead(botao); //ler a entrada digital 
  
    if(entrada == 1) {
      saida = !saida;  
      digitalWrite(led, saida);
      delay(500);
    }
    
  Serial.print("A entrada é: "); //print da entrada digital do botao
  Serial.print(entrada); //print da entrada digital do botao
  Serial.print("   A saida é: "); //print da entrada digital do botao
  Serial.println(saida); //print da entrada digital do botao

  delay(10);
}
