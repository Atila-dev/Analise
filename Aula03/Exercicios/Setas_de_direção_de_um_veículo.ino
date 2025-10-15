#define btnLeft 8
#define btnRight 10
#define btnBuzzer 9
#define ledL 6
#define ledR 7
#define buzzer 5

void setup()
{
  pinMode(ledL, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(btnLeft, INPUT);
  pinMode(btnRight, INPUT);
  pinMode(btnBuzzer, INPUT);
}

void loop()
{
  if(digitalRead(btnLeft)==1){
    digitalWrite(ledL, 1);
  	delay(300);
  	digitalWrite(ledL, 0);
  	delay(300);
  }
  if(digitalRead(btnRight)==1){
    digitalWrite(ledR, 1);
  	delay(300);
  	digitalWrite(ledR, 0);
  	delay(300);
  }
  if(digitalRead(btnBuzzer)==1){
    digitalWrite(buzzer, 1);
  	delay(300);
  	digitalWrite(buzzer, 0);
  	delay(300);
  }
