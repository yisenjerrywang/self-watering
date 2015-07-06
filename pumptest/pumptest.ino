int outPin = 8;
boolean pump = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Waiting 5 seconds");
  pinMode(outPin, OUTPUT);
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Entered main loop");
  if(pump == true) {
    digitalWrite(outPin, HIGH);
    pump = false;
  }
  else {
    digitalWrite(outPin, LOW);
    pump = true;
  }
  delay(2000);
}
