// -------------------------------------------------------------------------------
// O código abaixo faz leitura pelo sensor de luminosidade e dependendo do satus
// Quando esta escuro, ele acende o LED, e quando estuver claro o LED desliga
// E mostra uma mensagem no display lcd 16x2
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

void setup() {

  pinMode(13, OUTPUT);

  //Entrandas analogicash
  Serial.begin(9600);   //Iniciar a comunicacao serial
  Serial.available();
  Serial.read();

  lcd.begin(16, 2);


}

void loop() {
  //Controlando LED 1 com o sensor de luminosidade e  mostrando no display
  int sensorLuz = analogRead(A3);
  Serial.println(sensorLuz);
  if (sensorLuz > 50) {
    digitalWrite(13, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Claro => LED OFF");
    lcd.setCursor(6, 1);
    lcd.print(sensorLuz);
    delay(500);
  } else {
    digitalWrite(13, HIGH);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Escuro => LED ON");
    lcd.setCursor(6, 1);
    lcd.print(sensorLuz);
    delay(500);
  }
}
