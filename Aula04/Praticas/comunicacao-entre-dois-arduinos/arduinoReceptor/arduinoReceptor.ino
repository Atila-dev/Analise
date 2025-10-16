#define led 5
#define lr 3
#define lg 4
#define lb 2

char comando;

//Arduino Receptor

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(50);
  pinMode(led, OUTPUT);
  pinMode(lr, OUTPUT);
  pinMode(lg, OUTPUT);
  pinMode(lb, OUTPUT);

}

void loop() {
  if(Serial.available()>0){
    comando = Serial.read();
  }

  if(comando == 'A'){
    digitalWrite(led, 1);
  }else if(comando == 'a'){
    digitalWrite(led, 0);
  }else if(comando == 'r'){
    digitalWrite(lr, 1);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  }else if(comando == 'g'){
    digitalWrite(lr, 0);
    digitalWrite(lg, 1);
    digitalWrite(lb, 0);
  }else if(comando == 'b'){
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 1);
  }else{
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  }

}
