// -------------------------------------------------------------------------------
// O código diz respeito a automacao de uma casa do tipo 1, com objectivo de 
// controlar lampadas da sala, quarto e cozinha.
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 24/06/2021
// -------------------------------------------------------------------------------

//Definindo constantes 
#define sala 9
#define qua 13
#define coz 12

void setup() {
  //Definindo as saidas
  pinMode(sala, OUTPUT);
  pinMode(qua, OUTPUT);
  pinMode(coz, OUTPUT);
  
  Serial.begin(9600);   //Iniciar a comunicacao serial
}

void loop() {
  if (Serial.available() > 0) {
    char letra = Serial.read();
    delay(30);
    switch (letra) {
      case 'a':
        digitalWrite(qua, HIGH);
        Serial.println("Luz do Quarto ligada");
        break;
      case 'b':
        digitalWrite(qua, LOW);
        Serial.println("Luz do Quarto desligada");
        break;
      case 'c':
        digitalWrite(sala, HIGH);
        Serial.println("Luz da Sala ligada");
        break;
      case 'd':
        digitalWrite(sala, LOW);
        Serial.println("Luz do Sala desligada");
        break;
      case 'e':
        digitalWrite(coz, HIGH);
        Serial.println("Luz da Cozinha ligada");
        break;
      case 'f':
        digitalWrite(coz, LOW);
        Serial.println("Luz da Cozinha desligada");
        break;
     /* default:
        digitalWrite(sala, LOW);
        digitalWrite(coz, LOW);
        digitalWrite(qua, LOW);
        Serial.println("Tudo OFF");
        break;*/
    }
  }

}
