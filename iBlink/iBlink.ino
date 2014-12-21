
int buttonPin = 4; //declare the button variable and set the pin number
int ledPin = 3; //declare a value for the Led pin
boolean buttonState = false;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital LED Pin as an output.
  pinMode(ledPin, OUTPUT);
  // initailise the digital button Pin as an input.
  pinMode(buttonPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  // if button pressed digitalRead will be HIGH else it will be LOW
  digitalWrite(ledPin, digitalRead(buttonPin));
}

