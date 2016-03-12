int switchState = 0;

void setup() {
  pinMode(3, OUTPUT); // Green LED.
  pinMode(4, OUTPUT); // First red LED.
  pinMode(5, OUTPUT); // Second red LED.

  pinMode(2, INPUT);  // Switch button is pushed or not pushed.
}

void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW) { // The switch is not pushed.

    digitalWrite(3, HIGH);  // Green LED is on.
    digitalWrite(4, LOW);   // First red LED is off.
    digitalWrite(5, LOW);   // Second red LED is off.

  } else {  // The switch is pushed.

    // Green LED is always off while switch is pushed.
    digitalWrite(3, LOW);

    // One red LED is off, the other is on.
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250); // Pause for a quarter of a second.

    // One red LED is on, the other is off.
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(250); // Pause for a quarter of a second.

  }
}






