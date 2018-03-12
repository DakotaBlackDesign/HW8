
int rate = 200;
int rate2 = 400;
int rate3 = 800;
int timer = millis();
int timer2 = timer;
int timer3 = timer;
int timer4 = timer;
int timer5 = timer;
int timer6 = timer;

void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  timer2 = millis();
  timer4 = millis();
  timer6 = millis();
  if (timer2 - timer > rate){
  digitalWrite(9, HIGH);// turn the LED on (HIGH is the voltage level)
  }
  if (timer2 - timer > 2 * rate){
 digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  timer = millis();
     timer2 = timer;
  }
  if (timer4 - timer3 > rate2){
  digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
  }
  if (timer4 - timer3 > 2 * rate2){
 digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  timer3 = millis();
     timer4 = timer3;
  }
  if (timer6 - timer5 > rate3){
  digitalWrite(5, HIGH);// turn the LED on (HIGH is the voltage level)
  }
  if (timer6 - timer5 > 2 * rate3){
 digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  timer5 = millis();
     timer6 = timer5;
  }
  
}
