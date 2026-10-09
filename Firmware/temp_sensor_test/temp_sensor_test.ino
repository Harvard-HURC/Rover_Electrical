void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
pinMode(A0, INPUT);

}

void loop() {
//int adcValue = analogRead(14);

  Serial.print("ADC reading: ");
  Serial.println(analogRead(A0));

  delay(1000);
  // put your main code here, to run repeatedly:

}
