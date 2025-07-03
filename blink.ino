int blinkDelay = 500;
int minDelay = 100;
int decrement = 50;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(blinkDelay);
  digitalWrite(13, LOW);
  delay(blinkDelay);

  blinkDelay -= decrement;
  if (blinkDelay < minDelay) {
    blinkDelay = 500; // reset to original
  }
}
