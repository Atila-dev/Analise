#define vermelho 4
#define amarelo 5
#define verde 6
#define botao 2

void botaoAcionado();

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  
  pinMode(botao, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(botao), botaoAcionado, RISING);
}

void loop()
{
  digitalWrite(verde, 1);
  digitalWrite(amarelo, 0);
  delay(1000);
  
  digitalWrite(verde, 0);
  digitalWrite(amarelo, 1);
  delay(1000);
}

void botaoAcionado(){
  static unsigned long timer = 0;
  static bool estado = LOW;
  
  if((millis()-timer) > 100){
    estado = !estado;
    timer = millis();
  }
  
  digitalWrite(vermelho, estado);
}