#define aditya A0 //defined the sensor name and pin number
void setup() {
  Serial.begin(9600); // defined the baud rate
  pinMode(aditya, INPUT); //FUNC called pinmode that is used to define what pin is doing i.e we have written INPUT
}

void loop() {
  int sensorData = analogRead(aditya); //FUNC called analodRead which is taking the sensors data
  Serial.println(sensorData);
  delay(1000);
}
