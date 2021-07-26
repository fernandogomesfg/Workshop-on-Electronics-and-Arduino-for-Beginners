// -------------------------------------------------------------------------------
// O código abaixo, le os valores do potenciometro e exibe no monitor serial
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 18/06/2021
// -------------------------------------------------------------------------------
void setup() {
  //Entrandas analogicash
  
  Serial.begin(9600);

}

void loop() {
  int pot = analogRead(A1);

  Serial.println(pot);

}
