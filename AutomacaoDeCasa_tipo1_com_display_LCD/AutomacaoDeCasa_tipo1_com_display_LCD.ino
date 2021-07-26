// -------------------------------------------------------------------------------
// O código diz respeito a automacao de uma casa do tipo 1, com objectivo de 
// controlar lampadas da sala, quarto e cozinha. O diferencial, eh que traz
// consigo o display LCD para a exibicao do status de cada comando
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 29/06/2021
// -------------------------------------------------------------------------------
//Incluindo bibliotecas
#include <Wire.h>
#include <hd44780.h>
#include <hd44780_HC1627_I2C.h>
#include <hd44780_I2Cexp.h>
#include <hd44780_I2Clcd.h>
#include <hd44780_NTCU165ECPB.h>
#include <hd44780_NTCU20025ECPB_pinIO.h>
#include <hd44780_NTCUUserial.h>
#include <hd44780_pinIO.h>

//Instanciando a biblioteca
hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6, 5, 4, 3, 2, 1, HIGH);

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
  Serial.available();
  Serial.read();
  lcd.begin(16, 2);
}

void loop() {
  if (Serial.available() > 0) {
    char letra = Serial.read();
    delay(30);
    switch (letra) {
      case 'a':
        digitalWrite(qua, HIGH);
        Serial.println("Luz do Quarto ligada");
        lcd.clear();
        lcd.setCursor(2, 0);
        lcd.print("Luz do Quarto");
        lcd.setCursor(5, 1);
        lcd.print("LIGADA");

        break;
      case 'b':
        digitalWrite(qua, LOW);
        Serial.println("Luz do Quarto desligada");
        lcd.clear();
        lcd.setCursor(2, 0);
        lcd.print("Luz do Quarto");
        lcd.setCursor(4, 1);
        lcd.print("DESLIGADA");
        break;
      case 'c':
        digitalWrite(sala, HIGH);
        Serial.println("Luz da Sala ligada");
        lcd.clear();
        lcd.setCursor(3, 0);
        lcd.print("Luz da Sala");
        lcd.setCursor(5, 1);
        lcd.print("LIGADA");
        break;
      case 'd':
        digitalWrite(sala, LOW);
        Serial.println("Luz do Sala desligada");
        lcd.clear();
        lcd.setCursor(3, 0);
        lcd.print("Luz da Sala");
        lcd.setCursor(4, 1);
        lcd.print("DESLIGADA");
        break;
      case 'e':
        digitalWrite(coz, HIGH);
        Serial.println("Luz da Cozinha ligada");
        lcd.clear();
        lcd.setCursor(2, 0);
        lcd.print("Luz da Cozinha");
        lcd.setCursor(6, 1);
        lcd.print("LIGADA");
        break;

      case 'f':
        digitalWrite(coz, LOW);
        Serial.println("Luz da Cozinha desligada");
        lcd.clear();
        lcd.setCursor(2, 0);
        lcd.print("Luz da Cozinha");
        lcd.setCursor(4, 1);
        lcd.print("DESLIGADA");
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
