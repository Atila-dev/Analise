#define led 2

String comando;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(50);
  digitalWrite(led, 0);
}

void loop()
{
  if(Serial.available()>0){
    comando = Serial.readStringUntil('.');
  }
  
  if(comando == "ligar")
    digitalWrite(led, 1);
  else if(comando == "desligar")
    digitalWrite(led, 0);
}