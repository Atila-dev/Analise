#include <Servo.h>

#define pinEcho 10
#define pinTrig 9
#define buzzer 8
#define ledVermelho 12
#define ledVerde 13

Servo meuServo;
int i;
float dist =0;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  
  meuServo.attach(11);
  meuServo.write(5);
  
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho, LOW);
  Serial.begin(9600);
}

void loop()
{
  for(i=5; i<=175; i++){
    meuServo.write(i);
    delay(10);
    
    while(calcDist()<30){
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledVerde, LOW);
      delay(500);
      digitalWrite(ledVermelho, LOW);
      delay(500);
      tone(buzzer, 440, 500);
    }
    
    noTone(buzzer);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);
  }
  for(i=175; i>=5; i--){
    meuServo.write(i);
    delay(10);
    
    while(calcDist()<30){
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledVerde, LOW);
      delay(500);
      digitalWrite(ledVermelho, LOW);
      delay(500);
      tone(buzzer, 440, 500);
    }
    
    noTone(buzzer);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);
  }
      
}

float calcDist(){
  //Enviando um pulso sonoro
  digitalWrite(pinTrig, LOW);
  delay(2);
  digitalWrite(pinTrig, HIGH);
  delay(10);
  digitalWrite(pinTrig, LOW);
  
  //Lendo o tempo de ida e volta do pulso
  long duration = pulseIn(pinEcho, HIGH);
  
  //Calculando a distância em cm
  float dist = (duration * 0.0343)/2;
  return dist;
}