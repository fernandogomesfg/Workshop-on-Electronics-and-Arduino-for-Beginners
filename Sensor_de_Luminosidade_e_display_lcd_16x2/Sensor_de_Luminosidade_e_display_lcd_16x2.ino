// -------------------------------------------------------------------------------
// O código abaixo controla LED 1 com o sensor de luminosidade e imprime
// no display lcd de acordo com o status do LED 1
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
hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6, 5, 4, 3, 2, 1, HIGH);

void setup() {

  pinMode(13, OUTPUT);

  //Entrandas analogicash
  Serial.begin(9600);   //Iniciar a comunicacao serial
  Serial.available();
  Serial.read();

  lcd.begin(16, 2);
}

void loop() {

  //Controlando LED 1 com o sensor de luminosidade
  int sensorLuz = analogRead(A3);
  Serial.println(sensorLuz);
  if (sensorLuz > 50) {
    digitalWrite(13, LOW);
    lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("Esta Claro");
    lcd.setCursor(3, 1);
    lcd.print("LED Desligado");
    delay(500);
  } else {
    digitalWrite(13, HIGH);
    lcd.clear();
    lcd.setCursor(2, 0);
    lcd.print("Esta Escuro");
    lcd.setCursor(3, 1);
    lcd.print("LED Ligado");
    delay(500);
  }







}
