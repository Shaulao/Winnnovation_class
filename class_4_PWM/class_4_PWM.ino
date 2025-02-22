#define PIN 3
void setup() {
  
  pinMode(PIN, HIGH);

}

void loop() {
  // digitalWrite(PIN, HIGH);
  // delay(3000);
  // digitalWrite(PIN, LOW);
  // delay(2000);
     analogWrite(PIN, 200);
     delay(3000);
     analogWrite(PIN,0);
     delay(300);
}
