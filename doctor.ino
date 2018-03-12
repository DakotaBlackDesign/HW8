int t = 20;
int rate;
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  fade();
  Serial.println(rate);
  digitalWrite(9, HIGH);// turn the LED on (HIGH is the voltage level)
  delayMicroseconds(rate);
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(14);
}

void fade(){
  rate += t;
  if (rate > 1400 || rate < 20){
    t = -t;
  }
}
  
