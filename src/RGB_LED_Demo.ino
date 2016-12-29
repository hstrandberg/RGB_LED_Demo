//Small demo to test out the RGB LED
const byte ledPins[]={9, 10, 11};


void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<=2; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  int r,g,b;
  //r=random(0,244);
  //g=random(0,244);
  //b=random(0,244);
  r=0;
  g=0;
  b=255;
  strobo(1000,1,r,g,b);
  delay(1000);
  //fade(25);
}
void strobo(int numbers, int delay_time, int r, int b, int g){
  for(int i = 0; i <= numbers; i++){
    
    analogWrite(ledPins[0],r);
    analogWrite(ledPins[1],g);
    analogWrite(ledPins[2],b);
    delay(delay_time);
    analogWrite(ledPins[0],0);
    analogWrite(ledPins[1],0);
    analogWrite(ledPins[2],0);
    delay(delay_time);

  }
  
}

void fade(int delay_time){
  for(int i = 0; i <= 255; i++){
    analogWrite(ledPins[0], i);
    delay(delay_time);
  }

  for(int i = 0; i <= 255; i++){
    analogWrite(ledPins[0],255 - i);
    analogWrite(ledPins[1], i);
    delay(delay_time);
  }


  for(int i = 0; i <= 255; i++){
    analogWrite(ledPins[1],255 - i);
    analogWrite(ledPins[2], i);
    delay(delay_time);
  }
  for(int i = 0; i <= 255; i++){
    analogWrite(ledPins[2], 255 - i);
    delay(delay_time);
  }
}

