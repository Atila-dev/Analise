//===============================
//Adaptado de https://www.tinkercad.com/things/63IbOlP7JA9-musica-simples-no-arduino-leds-no-ritmo
//===============================

// identificando os dispositivos às suas portas
#define buzz 3

/* anotacao de frequencias:
	Si-(B-) = 123.5
	Dó(C) = 131
	Ré(D) = 147.2
	Mi(E) = 165
	Fá(F) = 174.3
	Sol(G) = 196
	La(A) = 220.5
	Si(B) = 247.3
	Dó+(C+) = 261.5
    Ré+(D+) = 295.1
*/

// definindo variaveis para as frequencias
int s = 123.5;
int c = 131;
int d = 147.2;
int e = 165;
int f = 174.3;
int g = 196;
int a = 220.5;
int b = 247.3;
int i = 261.5;
int r = 295.1;
 
// tempos da musica
int sb = 500;
int mn = 400;
int sm = 250;
int cl = 150;
  
void setup() 
{
    pinMode(buzz,OUTPUT);
}

void loop() 
{
    // Música 1
    tone(buzz,c);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,c);
    delay(sm);
    noTone(buzz);
  	delay(mn);
  	
  	tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	
  	delay(mn);
  	
  	tone(buzz,a);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,a);
    delay(sm);
    noTone(buzz);
  	
  	delay(mn);
  	
  	//sing c
  	tone(buzz,c);
    delay(sb);
    noTone(buzz);
  	
  	delay(mn);
  	
  	//sing 2
  	tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,d);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,d);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,c);
    delay(sb);
    noTone(buzz);
  	
  	delay(mn);
  	
  	//sing 3
  	tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
	  tone(buzz,d);
    delay(sb);
    noTone(buzz);
  	
  	delay(mn);
  	
  	//sing 3
  	tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
	  tone(buzz,d);
    delay(sb);
    noTone(buzz);
  	
  	delay(mn);
  	
  	// sing 1
    tone(buzz,c);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,c);
    delay(sm);
    noTone(buzz);
  	
  	delay(mn);
  	
  	tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,g);
    delay(sm);
    noTone(buzz);
  	
  	delay(mn);
  	
  	tone(buzz,a);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,a);
    delay(sm);
    noTone(buzz);
  	
  	delay(mn);
  	
  	//sing g
  	tone(buzz,g);
    delay(sb);
    noTone(buzz);
  	
  	delay(mn);
  	
  	
  	//sing 2
  	tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,f);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,e);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,d);
    delay(sm);
    noTone(buzz);
  	delay(cl);
	  tone(buzz,d);
    delay(sm);
    noTone(buzz);
  	delay(cl);
  	
  	tone(buzz,c);
    delay(sb);
    noTone(buzz);
  	
  	delay(7000);
  	
}