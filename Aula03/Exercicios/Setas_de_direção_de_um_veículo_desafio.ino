#define btnLeft 8
#define btnRight 10
#define btnBuzzer 9
#define ledL 6
#define ledR 7
#define buzzer 5

int controle = 1;
int l = 0, r = 0;

void setup()
{
  pinMode(ledL, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(btnLeft, INPUT);
  pinMode(btnRight, INPUT);
  pinMode(btnBuzzer, INPUT);
  
  digitalWrite(ledR, 0);
  digitalWrite(ledL, 0);
  digitalWrite(buzzer, 0);
}

void piscar(int c){
  digitalWrite(c, 1);
  delay(300);
  digitalWrite(c, 0);
  delay(300);
}

void loop()
{
  if(digitalRead(btnLeft)==1&&l==0){
    l = 1;
    r = 0;
  }
  if(digitalRead(btnRight)==1 && r==0){
    r = 1;
    l = 0;
  }
  if(digitalRead(btnBuzzer)==1){
    digitalWrite(buzzer, 1);
  }else{
    digitalWrite(buzzer, 0);
  }
  
  while(l||r){
    if(l){
      piscar(ledL);
      if(digitalRead(btnLeft)==1){
    	l = 0;
    	r = 0;
  	  }
      if(digitalRead(btnRight)==1){
    	l = 0;
    	r = 1;
  	  }
    }
    if(r){
      piscar(ledR);
      if(digitalRead(btnRight)==1){
    	l = 0;
    	r = 0;
  	  }
      if(digitalRead(btnLeft)==1){
    	l = 1;
    	r = 0;
  	  }
    }
    if(digitalRead(btnBuzzer)==1){
      digitalWrite(buzzer, 1);
    }else{
      digitalWrite(buzzer, 0);
    }
  }
  delay(200);
  
  
}