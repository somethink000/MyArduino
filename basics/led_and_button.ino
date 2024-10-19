
int LED = 6;
int BUTTON = 2;
int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  
}
void loop() {
  
  val = digitalRead(BUTTON);
  
  if (val == 1) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}