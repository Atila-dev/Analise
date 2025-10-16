#include <LiquidCrystal.h>

#define tri 8
#define echo 9
#define rs 2
#define e 3
#define d4 4
#define d5 5
#define d6 6
#define d7 7

int tempo = 0;
int dist = 0;

LiquidCrystal lcd(rs, e, d4, d5,d6, d7);

float tempoDoPulso(int x, int y);
long distanciaCM(int x);

void setup()
{
  pinMode(tri, OUTPUT);
  pinMode(echo, INPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}

//Usando HC-SR04 para medir disntâncias e exibir no display

void loop()
{
  tempo = tempoDoPulso(tri,echo);
  dist = distanciaCM(tempo);

  lcd.clear();
  delay(1000);
  lcd.print(dist);

  Serial.print("Distância em cm: ");
  Serial.print(dist);
  Serial.println("");
  // Serial.print("Tempo de Pulso: ");
  // Serial.print(tempo);
  Serial.println("--------------------");
}

long distanciaCM(int x){
  float a = x/60;
  return a;
}


float tempoDoPulso(int x, int y){
  digitalWrite(x, 0);
  delay(2);
  digitalWrite(x, 1);
  delay(10);
  digitalWrite(x,0);
  return pulseIn(y,1);
}