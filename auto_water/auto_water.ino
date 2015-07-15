// Author: Jerry Wang
// Date created: July 14th, 2015
// Reads moisture sensor value and turns on pump if reading indicates soil is dry

// Variable declaration
const int DRYNESS_THRESHOLD = 500;

const int outPin = 8;
const int moistureSensor = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int moistureReading = analogRead(moistureSensor);
  if(moistureReading >= DRYNESS_THRESHOLD) {
    digitalWrite(outPin, HIGH);
  }
  else {
    digitalWrite(outPin, LOW);
  }
  // delay 2 seconds in between readings, we don't want to poll too tightly
  delay(2000);
}
