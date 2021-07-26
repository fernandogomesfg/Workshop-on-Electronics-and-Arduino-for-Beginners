// -------------------------------------------------------------------------------
// O código abaixo liga o LED da porta 13 com o boatao da porta 5
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 16/06/2021
// -------------------------------------------------------------------------------

//Declarando a variavel de leitura
boolean ler;

void setup() {
  pinMode(13, OUTPUT);  //indicando a porta 13 como SAIDA
  pinMode(5, INPUT);    //indicando a porta 5 como ENTRADA

}

void loop() {
  ler = digitalRead(5);
  if (ler == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

}
