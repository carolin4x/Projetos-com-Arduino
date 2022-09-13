/*
  ---  LIGAR E DESLIGAR LED UTILIZANDO LDR    ----

*/

int led = 10; //Atribui o valor 10 a variável led
int ldr = A1; //Atribui A0 a variável ldr
int valorLdr = 0;//Declara a variável valorLdr como inteiro

void setup() {
  pinMode (led, OUTPUT); //Define led como saída (pino digital 10)
  pinMode (ldr, INPUT); //Define ldr como saída (pino analógico A1)
  Serial.begin(9600); //Inicialização da comunicação serial, com velocidade de comunicação de 9600

}

void loop() {
  valorLdr = analogRead (ldr);//Lê o valor do sensor ldr e armazena na variável valorLdr
  Serial.println(valorLdr);//Imprime na serial os dados de valorLdr

  if ((valorLdr) < 900) { //Se o valor de valorLdr for menor que 900:
    digitalWrite(led, HIGH);//Coloca led em alto para ligá-lo
  }
  else { //Senão:
    digitalWrite(led, LOW);//Coloca led em baixo para que o mesmo desligue ou permaneça desligado
  }

}
