//Programa : Controle 2 motores DC usando Ponte H L298N
//Autor : FILIPEFLOP
 
//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 3;
int IN2 = 4;
int IN3 = 5;
int IN4 = 6;

int TEMPO_DE_GIRO = 475;
  
void setup()
{
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
}
    
void loop()
{
  frente();
  direita();
}

void frente() {
  motorAFrente();
  motorBFrente();
  delay(1000);
}

void tras() {
  motorATras();
  motorBTras();
  delay(1000);
}

void direita() {
  motorATras();
  motorBFrente();  
  delay(TEMPO_DE_GIRO);
}

void esquerda() {
  motorAFrente();
  motorBTras();  
  delay(TEMPO_DE_GIRO);
}

void motorAFrente() {
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
}

void motorBFrente() {
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
}

void motorATras() {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
}

void motorBTras() {
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
}
