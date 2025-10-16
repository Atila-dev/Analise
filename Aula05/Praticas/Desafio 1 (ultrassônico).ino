//Pinos dos leds e buzzer:
#define R_led_BuzPin 13
#define Y_led_Pin 12
#define B_led_Pin 11

//Pinos do sensor ultrassônico
#define trig_Pin 2
#define echo_Pin 3

float distancia = 0;

void setup() {
  //Setup dos pinos de led
  pinMode(R_led_BuzPin, OUTPUT);
  pinMode(Y_led_Pin, OUTPUT);
  pinMode(B_led_Pin, OUTPUT);
  
  //Setup de pinos do sensor
  pinMode(trig_Pin, OUTPUT);
  pinMode(echo_Pin, INPUT);
  
  Serial.begin(9600); // Para depuração
}

void loop() {
  distancia = calcDist();

  Serial.print("Distância: ");
  Serial.println(distancia);

  if(distancia > 20){
    //Apagando os outros leds:
    digitalWrite(Y_led_Pin, LOW);
    digitalWrite(R_led_BuzPin, LOW);

    digitalWrite(B_led_Pin, HIGH);
    delay(100);
  }
  else if(distancia <= 20 && distancia > 10){
    //Apagando os outros leds:
    digitalWrite(B_led_Pin, LOW);
    digitalWrite(R_led_BuzPin, LOW);

    //Ligando o led amarelo
    digitalWrite(Y_led_Pin, HIGH);
    delay(100);
  }
  else if(distancia <= 10){
    //Apagando os outros leds:
    digitalWrite(B_led_Pin, LOW);
    digitalWrite(Y_led_Pin, LOW);

    //Ligando o led vermelho
    digitalWrite(R_led_BuzPin, HIGH);
    delay(100);
  }

}

float calcDist(){
  // Enviando um pulso sonoro
  digitalWrite(trig_Pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_Pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_Pin, LOW);

  // Lendo o tempo de ida e volta do pulso
  long duration = pulseIn(echo_Pin, HIGH);

  // Calculando a distância em centímetros
  float dist = (duration * 0.034) / 2;

  return dist;
}