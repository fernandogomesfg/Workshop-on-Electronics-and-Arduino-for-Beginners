// -------------------------------------------------------------------------------
// O código diz respeito ao uso de portas PWM
// -------------------------------------------------------------------------------
//Autor: Fernando Gomes
//Data: 24/06/2021
// -------------------------------------------------------------------------------
void setup() {
  Serial.begin(115200);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);  

}

void loop() {

  //Usando o potenciometro para variar a luminosidade do LED 9
  int ler = analogRead(A1);
  //Serial.println(ler);

  //Funcao map - map(variavel, inicio_anterior, fim_anterior, novo_inicio, novo_fim)
  ler = map(ler, 0, 1023, 0, 255);
  Serial.println(ler);

  analogWrite(9, ler); //Enviando o valor do potenciometro para o led
  analogWrite(10, ler);
  analogWrite(11, ler);

  //Comando para escrever numa porta PWM
  //analogWrite(pino, PWM); pino - 3,5,6,9,10,11; PWM (0 - 255);


  /*
    //Usando sendor de luminosidade
    int ler1 = analogRead(A3);
    //Serial.println(ler);

    //Funcao map - map(variavel, inicio_anterior, fim_anterior, novo_inicio, novo_fim)
    //ler1 = map(ler1, 0, 1015, 0, 255);
    Serial.println(ler1);

    //Enviando o valor do potenciometro para o led
    analogWrite(10, ler1);
    analogWrite(9, ler1);
  */
}
