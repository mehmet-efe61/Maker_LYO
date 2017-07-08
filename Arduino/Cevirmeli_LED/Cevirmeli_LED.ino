int ledPin=6;
int pot=A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  int pwm = analogRead(pot);
  analogWrite(ledPin, pwm/4);
}
