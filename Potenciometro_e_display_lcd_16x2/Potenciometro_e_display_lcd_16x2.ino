// -------------------------------------------------------------------------------
// O código abaixo le o valor do potenciometro e imprime no display lcd 16x2
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 28/06/2021
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
hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6, 5, 4, 3, 2, 1, HIGH); //(endereco,referencia, pinos do display[8,7,6,5,4,3,2,1, HIGH])


void setup() {
  //Entrandas analogicash

  Serial.begin(9600);
  lcd.begin(16, 2); //(tamanho do display
}

void loop() {
  int pot = analogRead(A1);

  Serial.println(pot);

  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Potenciometro");
  lcd.setCursor(6, 1);
  lcd.print(pot);
  delay(500);

}
