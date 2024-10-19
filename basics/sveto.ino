// GPIO пин, к которому подключен светодиод
constexpr int PIN_LED = 13;

void setup() {
  // Настраиваем пин со светодиодом в режим выхода
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // Зажигаем светодиод
  digitalWrite(PIN_LED, HIGH);
  // Ждём 1000 мс
  delay(1000);
  // Гасим светодиод
  digitalWrite(PIN_LED, LOW);
  // Ждём 1000 мс
  delay(1000);
}
