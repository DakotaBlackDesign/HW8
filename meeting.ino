int pulse = 2000;
float t = 0.05;
int Que;
int rate = 0;
float x = 0;
int count = 0; 
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);

Serial.begin(9600);
}

void loop() {
  if (count < 10){
    t = 0.05;
    rate = 0;
    fade();
    analogWrite(9, rate);
  }
  else if (count >= 2 && count < 15){
   t = 0.003;
   rate = 0;
   fade();
   analogWrite(9, rate);
  } 
  else{
    count = 0;   
  } 
}


void fade(){
  x += t;
  if ( x > 6.28319){
    count += 1;
    x = 0;
    }
  rate = (127 + 127 * cos(x));  
}
