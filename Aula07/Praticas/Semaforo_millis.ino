#define vermelho 5
#define amarelo 6
#define verde 7
#define r 4
#define g 3
#define botao 2

unsigned long timer = 0;
int controle = 1;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  
  pinMode(botao, INPUT);
}

void loop()
{
  if(controle == 1){
    digitalWrite(verde, 1);
    digitalWrite(vermelho, 0);
    digitalWrite(amarelo, 0);
    digitalWrite(r, 1);
    digitalWrite(g, 0);
  }
  if(controle == 2){
    digitalWrite(verde, 0);
    digitalWrite(vermelho, 1);
    digitalWrite(amarelo, 0);
    digitalWrite(r, 1);
    digitalWrite(g, 0);
  }
  if(controle == 3){
    digitalWrite(verde, 0);
    digitalWrite(vermelho, 0);
    digitalWrite(amarelo, 1);
    digitalWrite(r, 1);
    digitalWrite(g, 0);
  }
  
  if(digitalRead(botao)){
    while((millis()-timer) < 2000){
      digitalWrite(verde, 0);
      digitalWrite(vermelho, 1);
      digitalWrite(amarelo, 0);
      digitalWrite(g, 1);
      digitalWrite(r, 0);
    }
    timer = millis();
    controle = 1;
  }
  
  
  if((millis()-timer) > 1000){
    timer = millis();
    controle++;
    if(controle>3){
      controle = 1;
    }
  }
  
}