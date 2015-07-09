// Author: Jerry Wang
// Date created: July 8th, 2015
// Test to read the moisture sensor

int moistureSensor = 0;
void setup() {
  // put your setup code here, to run once:
  // use Serial
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(moistureSensor);

  // print the moisture level to serial
  Serial.println(value);

  //Wait 1 second between reads
  delay(1000);
}
