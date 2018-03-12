float t = 0.05;
int rate;
float x = 0;
void setup() {
pinMode(9, OUTPUT);
}

void loop() {
  fade();
  analogWrite(9, rate);// turn the LED on (HIGH is the voltage level)
}

void fade(){
  x += t;
  if ( x > 6.28319){
   x = 0;
  }
rate = (127 + 127 * sin(x));
}
