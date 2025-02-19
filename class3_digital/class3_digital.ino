#define adi 2//neglect tx rx and pin no. 13
void setup() {
  Serial.begin(9600);
  pinMode(adi, INPUT);
}

void loop() {
  int sensorData = digitalRead(adi);
  Serial.println(sensorData);
  delay(300);
}
