int ledPin = 3;
int buttonPin=2;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonDeger = digitalRead(buttonPin);
  digitalWrite(ledPin, buttonDeger);
}
