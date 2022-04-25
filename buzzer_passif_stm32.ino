int buzzer = PA0;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  //   PIN     FREQ  DUREE
  //tone(buzzer, 3000, 200);
  //delay(1000);
  //tone(buzzer, 3000, 200);
  //delay(750);
  tone(buzzer, 3000, 200);
  delay(350);
  //tone(buzzer, 3000, 200);
  //delay(1);
}
