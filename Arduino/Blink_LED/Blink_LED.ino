/*
 * Blink
 */

  int led = 6;
  int sure = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(sure);
  digitalWrite(led, LOW);
  delay(sure);
  sure = sure - 200;
}
