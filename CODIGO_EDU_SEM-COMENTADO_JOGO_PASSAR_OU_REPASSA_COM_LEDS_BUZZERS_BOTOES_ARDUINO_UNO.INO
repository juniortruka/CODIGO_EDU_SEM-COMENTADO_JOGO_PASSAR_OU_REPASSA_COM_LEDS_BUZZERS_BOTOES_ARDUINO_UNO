// Código do passa ou repassa sem comentado: 


#define botaoJogador1 13
#define ledJogador1 12
#define botaoJogador2 9
#define ledJogador2 10
#define ledVermelho  8
#define buzzer 11

void setup(){
  pinMode (botaoJogador1, INPUT);
  pinMode (botaoJogador2, INPUT);
  pinMode (ledJogador1, OUTPUT);
  pinMode (ledJogador2, OUTPUT);
  pinMode (ledVermelho, OUTPUT);
  pinMode (buzzer, OUTPUT);
}

void loop(){
  if (digitalRead (botaoJogador1)== HIGH){
    digitalWrite(ledJogador1, HIGH);
    efeitoSonoro();
    delay(1000);
    piscaLed();
  }
  else if (digitalRead (botaoJogador2)== HIGH){
    digitalWrite(ledJogador2, HIGH);
    delay(1000);
    efeitoSonoro();
    piscaLed();
  }
}

void efeitoSonoro(){
  for (int i = 0; i<3; i++){
    tone (buzzer,440);
    delay(100);
    noTone (buzzer);
    delay(200);
  }
  }

  void piscaLed(){
    for (int i = 0; i<4; i++){
      digitalWrite (ledJogador1, HIGH);
      digitalWrite (ledJogador2, HIGH);
      digitalWrite (ledVermelho, HIGH);
      delay (500);
      digitalWrite (ledJogador1, LOW);
      digitalWrite (ledJogador2, LOW);
      digitalWrite (ledVermelho, LOW);
      delay(500);
    }
}
