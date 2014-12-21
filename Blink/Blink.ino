
int ledPin = 3; //declare a value for the Led pin

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital LED Pin as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000));                // wait for one second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                 // wait for one second
}

