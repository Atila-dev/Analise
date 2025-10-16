#define lr 3
#define lg 4
#define lb 2

int serial;
String comando;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(50);
  pinMode(lr, OUTPUT);
  pinMode(lg, OUTPUT);
  pinMode(lb, OUTPUT);
}

void loop() {

  if(Serial.available()>0){
    serial = Serial.read();
    comando = Serial.readStringUntil('#');
  }

  //delay(500);

  if(serial=='1'){
    digitalWrite(lr, 1);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  }else if(serial=='2'){
    digitalWrite(lr, 0);
    digitalWrite(lg, 1);
    digitalWrite(lb, 0);
  }else if(serial=='3'){
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 1);
  }else if(serial=='4'){
    digitalWrite(lr, 1);
    digitalWrite(lg, 1);
    digitalWrite(lb, 1);
  } else if(serial=='0'){
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  } 

   if(comando=="led vermelho"){
    digitalWrite(lr, 1);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  }else if(comando=="led verde"){
    digitalWrite(lr, 0);
    digitalWrite(lg, 1);
    digitalWrite(lb, 0);
  }else if(comando=="led azul"){
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 1);
  }else if(comando=="branco"){
    digitalWrite(lr, 1);
    digitalWrite(lg, 1);
    digitalWrite(lb, 1);
  } else if(comando=="desligar"){
    digitalWrite(lr, 0);
    digitalWrite(lg, 0);
    digitalWrite(lb, 0);
  } 

  Serial.println(comando);

}
