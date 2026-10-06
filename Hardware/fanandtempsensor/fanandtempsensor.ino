/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/ReadAnalogVoltage/
*/
 const int analog_read = A0 ;
 const int out = 5 ;
 const float volt_max = 3.3 ;
 const int threshold = 1 ;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(out, OUTPUT) ;
}

void loop() {
  fanonly() ;
}

// void therm() {
//   // read the input on analog pin 0:
//   int sensorValue = analogRead(analog_read);
//   // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
//   float voltage = sensorValue * (volt_max / 1023.0);
//   if (voltage > threshold) {
//     digitalWrite(out, HIGH);} else {
//     digitalWrite(out, LOW);
//   }
//   // print out the value you read:
//   Serial.println(voltage);
// }

void fanonly() {
  digitalWrite(out, HIGH);
  delay(1000);
  digitalWrite(out, LOW);
  delay(1000);
}
