// -------------------------------------------------------------------------------
// O código abaixo, ilustra controle do LED 1  com o sensor de LUMINOSIDADE 
// e LED 2 (RGB) com o POTENCIOMETRO
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 21/06/2021
// -------------------------------------------------------------------------------
void setup() {
  pinMode(13, OUTPUT);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  //Entrandas analogicas
  Serial.begin(9600);   //Iniciar a comunicacao serial
  Serial.available;
  Serial.read();

}

void loop() {

  //Controlando LED 1 com o sensor de luminosidade
  int sensorLuz = analogRead(A3);
  Serial.println(sensorLuz);
  if (sensorLuz > 50) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }

  //Controlando o LED 2 com o Potenciometro
  int pot = analogRead(A1);
  //Serial.println(pot);
  if ((pot >= 10) && (pot < 350))  {
    digitalWrite(9, HIGH);
    digitalWrite(9, LOW);
  } else if ((pot >= 350) && (pot < 850)) {
    digitalWrite(10, HIGH);
    digitalWrite(10, LOW);
  } else if ((pot >= 850) && (pot < 1024)) {
    digitalWrite(11, HIGH);
    digitalWrite(11, LOW);
  }


}
