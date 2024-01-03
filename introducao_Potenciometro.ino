// C++ code
//
int pot;//variável para o potenciometro
void setup()
{
  Serial.begin(9600); //liga o monitor serial
}

void loop()
{
  pot = analogRead(A1); //potenciomentro na entrada analógica 1
  Serial.println(pot); //printar na tela os dados do potenciometro que vão de 0 até 1023 são 1024 valores
  delay(1);
  
}