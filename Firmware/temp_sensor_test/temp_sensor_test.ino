
const int FAN_PIN = 5;
const unsigned long ON_TIME_MS  = 5000;
const unsigned long OFF_TIME_MS = 5000;
const double REFERENCE_VOLTAGE = 3.3;
const int ADC_MAX = 4095; // default for 12 bit on teensy 4.1

void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
pinMode(A0, INPUT);
pinMode(FAN_PIN, OUTPUT);
digitalWrite(FAN_PIN, LOW);  // fan on

}

void loop() {
//int adcValue = analogRead(14);


  int readingRaw = analogRead(A0);
  Serial.print("ADC reading: ");
  Serial.println(readingRaw);
  delay(1000);

  double Vout = readingRaw * REFERENCE_VOLTAGE / ADC_MAX; 

  Serial.println("Vout is: " + String(Vout));

  double Rt = Vout * 10000 / (REFERENCE_VOLTAGE - Vout);

  Serial.println("Rt: " + String(Rt));
  if (Rt/10000 < 0.8)
  {
    digitalWrite(FAN_PIN, LOW);  // fan on
  }
  delay(ON_TIME_MS);

  digitalWrite(FAN_PIN, HIGH);   // fan off
  delay(OFF_TIME_MS);

}
//doesn't work someone fix