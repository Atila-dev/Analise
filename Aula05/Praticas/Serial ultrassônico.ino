#define pinEcho 3
#define pinTrig 2

void setup()
{
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Distância: ");
  Serial.print(calcDist());
  Serial.println(" cm");
  delay(500);
}

float calcDist(){
 	
  // Enviando um pulso sonoro
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  
  // Lendo o tempo de ida e volta do pulso
  long duration = pulseIn(pinEcho, HIGH);
  
  // Calculando a distância em centímetros
  float dist = (duration * 0.034) / 2;
  return dist;
}