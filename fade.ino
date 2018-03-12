
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
float rate = 10;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  rate = map(sensorValue,1024*3/4,1023,0.01,12);
  if (sensorValue > 1024/4){
  digitalWrite(5, HIGH);
  }
  if (sensorValue < 1024/4){
    digitalWrite(5, LOW);
  }
  if (sensorValue > 1024/2){
  digitalWrite(6, HIGH);
  }
  if (sensorValue < 1024/2){
    digitalWrite(6, LOW);
  }
  if (sensorValue > 1024*3/4){
    digitalWrite(9, HIGH);// turn the LED on (HIGH is the voltage level)
    delay(rate);
    digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
    delay(14);
    Serial.println(rate);
  }
  if (sensorValue < 1024*3/4){
    digitalWrite(9, LOW);
  }
  
}
