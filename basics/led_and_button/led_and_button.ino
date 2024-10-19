
int LED = 6;
int BUTTON = 2;
int val = 0;
bool state = true;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
  
}
void loop() {
  
  val = digitalRead(BUTTON);

  delay(200);

  if ( val == HIGH ) {
    state = !state;
  }


  if ( state ) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
