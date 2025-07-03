int blinkDelay = 500; // Blink delay in milliseconds

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(blinkDelay);
  digitalWrite(13, LOW);
  delay(blinkDelay);
}
