
#include <Wire.h> // allows you to communicate using I2C
#include "rgb_lcd.h" //Grove library for LCD, we need to install it!

int potPin = 0, ledPin = 3; //declare a value for the pins
int shadyVal = 0, timer = 0; //declare variable for output and timerconst 
int colourR = 255, colourG = 0 colourB = 0; //Backlight colour vals
rgb_lcd lcd; //initialise the lcd object

void setup() {
  // initialize digital LED Pin as an output.
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2); // set up the LCD, ours have 16 columns and 2 rows
  lcd.setRGB(colourR, colourG, colourB); //set the backlight colour
  //print message to LCD
  lcd.print("Hello World!");
  delay(3000);
}
// the loop function runs over and over again forever
void loop() {
  //analogWrite can be any value from 0 - 255
  shadyVal = map(analogRead(potPin), 0, 1023, 0, 255);
  analogWrite(ledPin, shadyVal); //write value between 0-255 LED
  if(timer == 1000){ //every second print to the LCD
    lcd.clear(); //clear what was dsiplayed before
    lcd.setCursor(0, 0); // set the course to print the message
    lcd.print("Sensor = "); 
    lcd.setCursor(9, 0); // move the cursor to print the next part
    lcd.print(analogRead(potPin)); // repeat these steps for whole message
    lcd.setCursor(0, 1);
    lcd.print("LED = ");
    lcd.setCursor(6, 1);
    lcd.print(shadyVal);
    //reset the timer
    timer = 0;
  }else{
    //increment the timer by 1
    timer++;
  }
  delay(1); //delay for 1 millisecond so timer increments in milliseconds
}





