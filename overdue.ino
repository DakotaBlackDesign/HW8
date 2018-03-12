int rate = 200;
int timer = millis();
int timer2 = timer;
void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  rate = (220 + 200 * sin(millis() / 300));
  Serial.println(rate);
  timer2 = millis();
  if (timer2 - timer > rate){
    digitalWrite(9, HIGH);// turn the LED on (HIGH is the voltage level)
  }
  if (timer2 - timer > 2 * rate){
    digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
    timer = millis();
    timer2 = timer;
  }
}
