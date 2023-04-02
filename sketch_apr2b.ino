//Blinks the onboard LED

const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, 0);
  delay(100);
  digitalWrite(LED, 1);
  delay(100);
}