// -------------------------------------------------------------------------------
// O código ilustra o uso do display de 7 segmentos
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 21/06/2021
// -------------------------------------------------------------------------------
int tamanho = 7;

//Incluindo Bibliotecas
#include <Adafruit_MCP23008.h>

//Instanciando a biblioteca
Adafruit_MCP23008 seg7;

//uint8_t = unsigned int - que quer duzer digitos positivos inteiros
uint8_t digitos[tamanho] = {//vector
  B00111111, B00000110, B01011011, B01001111, B01100110, B01101101, B01111100

};


void setup() {
  seg7.begin(0x4);
  for (int i = 0; i <= tamanho; i++) {
    seg7.pinMode(i, OUTPUT);
  }

}

void loop() {
  //Imprimindo na tela
  for (int i = 0; i <= tamanho; i++) {
    seg7.writeGPIO(digitos[i]);
    delay(1000);
  }

}
