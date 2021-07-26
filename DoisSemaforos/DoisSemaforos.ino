// -------------------------------------------------------------------------------
// O código ilustra sobre o funcionamento de dois semaforos de um cruzamento
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 21/06/2021
// -------------------------------------------------------------------------------
void setup() {
  //Semaforo 1
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

  //Semafor0 2
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(13, LOW);  //Apaga o led vermelho-1
  digitalWrite(11, HIGH); //Acende o led verde-1
  digitalWrite(2, HIGH);  //Acende o led vermelho-2
  delay(5000);            //Espera 4 segundos
  digitalWrite(11, LOW);  //Apaga o led verde-1
  digitalWrite(12, HIGH); //Acende o led amarelo-1
  delay(2000);            //Espera 2 segundos
  digitalWrite(12, LOW);  //Apaga o led amarelo-1
  digitalWrite(13, HIGH); //Acende o led vermelho-1
  digitalWrite(2, LOW);   //Apaga o led vermelho-2
  digitalWrite(0, HIGH);  //Acende o led verde-2
  delay(5000);            //Espera 4 segundos
  digitalWrite(0, LOW);   //Apaga o led verde-2
  digitalWrite(1, HIGH);  //Acende o led amarelo-2
  delay(2000);            //Espera 2 segundos
  digitalWrite(1, LOW);   //Apaga o led amarelo-2

}
