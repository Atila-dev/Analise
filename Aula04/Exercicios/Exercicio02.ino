#define vermelho 2
#define amarelo 3
#define laranja 4
#define verde 5
#define ldr A0

int controle;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(laranja, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  controle = digitalRead(ldr);
  Serial.println("=================");
  Serial.println(controle);
  
  if(controle<=200){
    digitalWrite(vermelho, 1);
    digitalWrite(amarelo, 0);
    digitalWrite(laranja, 0);
    digitalWrite(verde, 0);
  }else if(controle >200 && controle <=400){
    digitalWrite(vermelho, 0);
    digitalWrite(amarelo, 1);
    digitalWrite(laranja, 0);
    digitalWrite(verde, 0);
  }else if(controle >400 && controle <= 600){
    digitalWrite(vermelho, 0);
    digitalWrite(amarelo, 0);
    digitalWrite(laranja, 1);
    digitalWrite(verde, 0);
  }else{
    digitalWrite(vermelho, 0);
    digitalWrite(amarelo, 0);
    digitalWrite(laranja, 0);
    digitalWrite(verde, 1);
  }
}