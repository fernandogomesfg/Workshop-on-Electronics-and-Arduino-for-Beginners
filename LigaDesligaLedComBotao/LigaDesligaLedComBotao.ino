// -------------------------------------------------------------------------------
// O código abaixo, LIGA e DESLIGA o LED (na porta 13), usando um botao conectado 
// na porta 5
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 16/06/2021
// -------------------------------------------------------------------------------

boolean ler, estado = LOW;
void setup() {
  pinMode(13, OUTPUT);
  //pinMode(5, INPUT);

}

void loop() {
  ler = digitalRead(5);
  if (ler == HIGH) {
    //delay(50);
    if (ler == HIGH) {
      estado = !(estado);
      digitalWrite(13, estado);
    }

  }



}
