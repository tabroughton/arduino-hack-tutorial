
int potPin = 0; //declare a value for the analog pin 
int ledPin = 3; //declare a value for the Led pin
int shadyVal = 0; //declare variable for the 'shadyness'

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital LED Pin as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //analogWrite can be any value from 0 - 255
  shadyVal = map(analogRead(potPin), 0, 1023, 0, 255);
  
  analogWrite(ledPin, shadyVal); 
}

