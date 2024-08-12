void setup() {
  pinMode(A1, OUTPUT);
}
void loop() {
  digitalWrite(A1, HIGH);
  delay(500);
  digitalWrite(A1, LOW);
  delay(500);
}