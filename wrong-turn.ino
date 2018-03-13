int pulse = 0;
float tick = 0;
int count = 0; 
void setup() {
pinMode(9, OUTPUT);
}

void loop() {
  if (count < 4){
    pulser(0.005);
    analogWrite(9, pulse);
  }
  else if (count >= 2 && count < 20){
   pulser(0.05);
   analogWrite(9, pulse);
  } 
  else{
    count = 0;   
  } 
}


int pulser(float pace) {
  tick += pace;
  if ( tick > 6.28319){
    count += 1;
    tick = 0;
    }
  pulse = (127 + 127 * sin(tick));
  return (pulse);  
}
