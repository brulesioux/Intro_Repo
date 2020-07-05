/*
  LED_Blink
  Turns an LED on for one second, then off for one second, repeatedly.
  This example code is in the public domain.
  Video Tutorial: https://www.youtube.com/watch?v=Mwmak4vMJ0k&t=581s
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 7 as an output.
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
