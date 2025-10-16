#define vx A0
#define vy A1
#define sw 5
#define lr 2
#define lg 3 
#define lb 4

void setup() {
  // Etapa 1: Ler Dados do JoyStick
  Serial.begin(9600);
  pinMode(vx, INPUT);
  pinMode(vy, INPUT);
  pinMode(sw, INPUT);

  //Etapa 2: Controlar RGB com JoyStick
  pinMode(lr, OUTPUT);
  pinMode(lg, OUTPUT);
  pinMode(lb, OUTPUT);

}

void loop() {
  // Etapa 01
  int valorX = analogRead(vx);
  int valorY = analogRead(vy);
  int valorSW = digitalRead(sw);

  Serial.print("Valor VX: ");
  Serial.print(valorX);
  Serial.print("\t");
  Serial.print("Valor VY: ");
  Serial.print(valorY);
  Serial.print("\t");
  Serial.print("Valor SW: ");
  Serial.print(valorSW);
  Serial.println("");
  Serial.println("--------------------------------");
  delay(500);

  //Etapa 02:
  if(valorY < 30){
    digitalWrite(lr, 1);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  }else if(valorY > 800){
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 1);
  }else{
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  }

  if(valorX < 30){
    digitalWrite(lr, 0);
    digitalWrite(lg, 1);
    digitalWrite(lb, 0);
  }else if(valorX > 800){
    digitalWrite(lr, 1);
    digitalWrite(lg, 1);
    digitalWrite(lb, 0);
  }else{
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  }

  if(valorSW == 0){
    digitalWrite(13, 0);
  }else{
    digitalWrite(13, 1);
  }

}
