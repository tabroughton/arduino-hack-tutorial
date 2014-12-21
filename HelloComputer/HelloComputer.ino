
int potPin = 0; //declare a value for the analog pin 
int ledPin = 3; //declare a value for the Led pin
int shadyVal = 0; //declare variable for the 'shadyness'
int timer = 0; //declare variable to time 1 second
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital LED Pin as an output.
  pinMode(ledPin, OUTPUT);
  
  //initailise Serial 
  Serial.begin(9600);
  //print message to Computer
  Serial.println("Hello Computer!");
  delay(1000);
}
// the loop function runs over and over again forever
void loop() {
  //analogWrite can be any value from 0 - 255
  shadyVal = map(analogRead(potPin), 0, 1023, 0, 255);
  analogWrite(ledPin, shadyVal); //write value between 0-255 LED
  if(timer == 1000)
  {
    // print to the serial port
    Serial.print("value reading of sensor = ");
    Serial.print(analogRead(potPin));
    Serial.print(", value writing to LED = ");
    Serial.println(shadyVal);    
    //reset the timer
    timer = 0;
  }else{
    //increment the timer by 1
    timer++;
  }  
  delay(1); //delay for 1 millisecond so timer increments in milliseconds
}





