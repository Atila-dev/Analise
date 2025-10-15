#define azul 3
#define verde 5
#define amarelo 6

#define pot A1

int leitura;

void setup()
{
  pinMode(amarelo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  leitura = map(analogRead(pot), 0, 1023, 0, 255);
  digitalWrite(azul, leitura);
  digitalWrite(verde, leitura);
  digitalWrite(amarelo, leitura);
}  