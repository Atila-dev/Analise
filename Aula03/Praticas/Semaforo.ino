#define sVermelho 2
#define sAmarelo 3
#define sVerde 4
#define botao 5
#define red 8
#define green 9
#define blue 10

void setup()
{
  pinMode(sVermelho, OUTPUT);
  pinMode(sAmarelo, OUTPUT);
  pinMode(sVerde, OUTPUT);
  pinMode(botao, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
}

void loop()
{
  digitalWrite(red, HIGH);
  
  digitalWrite(sVermelho, HIGH);
  digitalWrite(sAmarelo, LOW);
  digitalWrite(sVerde, LOW);
  delay(1000);
  
  digitalWrite(sVermelho, LOW);
  digitalWrite(sAmarelo, HIGH);
  digitalWrite(sVerde, LOW);
  delay(1000);
  
  digitalWrite(sVermelho, LOW);
  digitalWrite(sAmarelo, LOW);
  digitalWrite(sVerde, HIGH);
  delay(1000);
  
  if(digitalRead(botao)==1){
    digitalWrite(sVermelho, HIGH);
  	digitalWrite(sAmarelo, LOW);
 	digitalWrite(sVerde, LOW);
    
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    delay(2000);
    digitalWrite(green, LOW);
  }
  
}