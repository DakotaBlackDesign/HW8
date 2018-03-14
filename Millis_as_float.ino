int rate = 200;
void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float x = millis();
  float freq = 8; // hz 
  rate = (127 + 127 * sin(freq * 2*PI*x / 1000));
  Serial.println(x);
  Serial.println(rate);
  analogWrite(9, rate);// turn the LED on (HIGH is the voltage level)
 
}
