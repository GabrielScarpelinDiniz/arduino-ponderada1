int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(3);
  if (buttonState == HIGH){
    digitalWrite(2, HIGH);
  }

  else {
    digitalWrite(2, LOW);
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
}
