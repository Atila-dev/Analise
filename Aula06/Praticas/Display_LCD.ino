#include <LiquidCrystal.h>

#define rs 2
#define e 3
#define d4 4
#define d5 5
#define d6 6
#define d7 7
#define trigger 8
#define echo 9

LiquidCrystal lcd(rs, e, d4, d5,d6, d7);

char *frase = {"Aula de Arduino"};
float distancia;

float calcDist(){
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  long duracao = pulseIn(echo, HIGH);
  
  float dist = (duracao*0.034)/2;
  return dist;
}

void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  
  lcd.begin(16,2);
  lcd.clear();
  Serial.begin(9600);
}

void loop() {
  
  //Etapa 1: Teste de funcionamento do Display
  
  lcd.setCursor(1,0);
  lcd.print("Preparando");
  delay(1000);
  lcd.clear();
  lcd.print(frase);
  delay(1000);
  lcd.clear();
  
  
  /*
  //Etapa 2: Exibir distancia com HC-SR04
  
  lcd.setCursor(0,0);
  lcd.print("Distancia cm");
  lcd.setCursor(0,1);
  distancia = calcDist();
  lcd.print(distancia);
  delay(400);
  lcd.clear();
  */
  
}
