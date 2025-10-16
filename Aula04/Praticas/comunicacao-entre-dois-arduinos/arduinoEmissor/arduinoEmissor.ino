
//Arduino que envia dados

char comando;

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(50);
}

void loop() {
  Serial.write('A');
  delay(500);
  Serial.write('a');
  delay(500);

  // if(Serial.available()>0){
  //   comando = Serial.read();
  // }

  // if(comando == 'r'){
  //   Serial.write('r');
  // }else if(comando == 'g'){
  //   Serial.write('g');
  // }else if(comando == 'b'){
  //   Serial.write('b');
  // }

  // Serial.println(comando);

}
