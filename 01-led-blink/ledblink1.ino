int redLed = 12;

void setup() {
  pinMode(redLed,OUTPUT);
}

void loop() {
  digitalWrite(redLed,HIGH);  
  delay(1000);
  digitalWrite(redLed,LOW);  
  delay(1000);
}
