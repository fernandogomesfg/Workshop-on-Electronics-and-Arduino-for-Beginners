// -------------------------------------------------------------------------------
// O código que executa o famoso "Ola Mundo" no contexto do Arduino
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 14/06/2021
// -------------------------------------------------------------------------------

void setup() {
  //Informando que a porta 13 sera uma saida
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);   //Mandando a porta 13 escrever o sinal ALTO
  delay(1000);              //Mandando o sinal ficar no nivel alto por 1 segundo
  digitalWrite(13, LOW);    //Mandando a porta 13 escrever o sinal BAIXO
  delay(1000);              //Mandando o sinal ficar no nivel alto por 1 segundo
}
