const int ledPin = 13;
const int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // use internal pull-up resistor
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) { // button is pressed
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } else {
    digitalWrite(ledPin, LOW); // turn off LED when not blinking
  }
}
