#define buzzer 3
#define ldr A0

int controle;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  controle = digitalRead(ldr);
  if(controle<200){
    digitalWrite(buzzer, 1);
    delay(500);
    digitalWrite(buzzer, 0);
    delay(500);
  }
}