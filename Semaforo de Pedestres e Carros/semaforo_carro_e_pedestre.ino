/*
 * Semáforo de Automóveis e de Pedestre
 */


int p;


void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);}
  
void loop(){
  digitalWrite(13, HIGH); 
  digitalWrite(4, HIGH);
  delay(5000); 
  digitalWrite(4, LOW);
  for(p = 0; p < 5; ++p){ //vermelhor para pedestres piscar 5 vezes
    digitalWrite(7, HIGH);//veremlho para pesestres liga
    delay(500);
    digitalWrite(7, LOW);//vermelho para pedestres apaga
    delay(500);
  }
  digitalWrite(13, LOW);
  digitalWrite(7, HIGH);//vermelho pedestre
  digitalWrite(8, HIGH);//verde carro
  delay(5000); // 5 segundos para os carros cruzarem
  digitalWrite(8, LOW);//verde para carro apaga
  digitalWrite(12, HIGH);//atenção
  digitalWrite(7, HIGH);
  delay(2500);
  
  digitalWrite(7,LOW);//vermelho para pedestres apaga
  digitalWrite(12, LOW);//amarelo para carros apaga
  digitalWrite(13, HIGH);//vermelho para carros acende
  digitalWrite(4,HIGH);//verde para pedestres acende
  delay(5000);//5 segundos para os pedestres atravessarem
}
