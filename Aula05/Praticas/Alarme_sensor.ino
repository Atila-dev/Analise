#define ledVermelho 3
#define ledAmarelo 4
#define ledVerde 5

#define buzzer 7

#define tri 8
#define echo 9

float dist;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(tri, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

float calcDist(){
  //Enviando um pulso sonoro
  digitalWrite(tri, LOW);
  delayMicroseconds(2);
  digitalWrite(tri, HIGH);
  delayMicroseconds(15);
  digitalWrite(tri, LOW);
  
  //Lendo o tempo de ida e volta do pulso
  long duration = pulseIn(echo, HIGH);
  
  //Calculando a distância em cm
  float dist = (duration * 0.0343)/2;
  return dist;
}

void loop()
{
  dist = calcDist();
  
  if(dist<30){
    digitalWrite(ledVermelho, 1);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledVerde, 0);
    digitalWrite(buzzer, 1);
    delay(1000);
    digitalWrite(buzzer, LOW);
  }else if(dist>30 && dist<60){
    digitalWrite(ledVermelho, 0);
    digitalWrite(ledAmarelo, 1);
    digitalWrite(ledVerde, 0);
  }else{
    digitalWrite(ledVermelho, 0);
    digitalWrite(ledAmarelo, 0);
    digitalWrite(ledVerde, 1);
  }
  Serial.println(dist);
}
