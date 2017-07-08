int ldrDeger = 0;
int kirmiziLed = 8;
int sariLed = 9;
int yesilLed = 10;

void setup() {
  pinMode(kirmiziLed, OUTPUT);
  pinMode(sariLed, OUTPUT);
  pinMode(yesilLed, OUTPUT);
}

void loop() {
  ldrDeger = analogRead(A0);

  if (ldrDeger>0 && ldrDeger<=400) {
    digitalWrite(kirmiziLed, HIGH);
    digitalWrite(sariLed, HIGH);
    digitalWrite(yesilLed, HIGH);
  }
  else if(ldrDeger>400 && ldrDeger<=700){
    digitalWrite(kirmiziLed, HIGH);
    digitalWrite(sariLed, HIGH);
    digitalWrite(yesilLed, LOW);
  }
  else if(ldrDeger>700)
  {
    digitalWrite(kirmiziLed, HIGH);
    digitalWrite(sariLed, LOW);
    digitalWrite(yesilLed, LOW);
  }
  delay(500);
}
