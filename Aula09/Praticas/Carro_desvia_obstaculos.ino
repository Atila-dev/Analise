#define motor1A 8
#define motor1B 9
#define motor2A 10
#define motor2B 11
#define echo 12
#define trigger 13

void parar(){
  digitalWrite(motor1A, 0);
  digitalWrite(motor1B, 0);
  digitalWrite(motor2A, 0);
  digitalWrite(motor2B, 0);
}

void virarDireita(){
  digitalWrite(motor1A, 0);
  digitalWrite(motor1B, 1);
  digitalWrite(motor2A, 1);
  digitalWrite(motor2B, 0);
}

void virarEsquerda(){
  digitalWrite(motor1A, 1);
  digitalWrite(motor1B, 0);
  digitalWrite(motor2A, 0);
  digitalWrite(motor2B, 1);
}

void frente(){
  digitalWrite(motor1A, 1);
  digitalWrite(motor1B, 0);
  digitalWrite(motor2A, 1);
  digitalWrite(motor2B, 0);
}

void voltar(){
  digitalWrite(motor1A, 0);
  digitalWrite(motor1B, 1);
  digitalWrite(motor2A, 0);
  digitalWrite(motor2B, 1);
}

float calcDist(){
  //Enviando um pulso sonoro
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(15);
  digitalWrite(trigger, LOW);
  
  //Lendo o tempo de ida e volta do pulso
  long duration = pulseIn(echo, HIGH);
  
  //Calculando a distância em cm
  float dist = (duration * 0.0343)/2;
  return dist;
}

float dist, option1, option2;

void setup() {
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);

  parar();
  Serial.begin(9600);
}

void loop() {
  dist = calcDist();
  Serial.println("=====================");
  Serial.println(dist);
  frente();
  if(dist <= 25){
    parar();
    voltar();
    delay(200);
    parar();
    virarDireita();
    delay(400);
    parar();
    option1 = calcDist();
    virarEsquerda();
    delay(800);
    parar();
    option2 = calcDist();

    if(option1>=option2){
      virarDireita();
      delay(800);
      parar();
      frente();
    }else{
      frente();
    }
  }
}