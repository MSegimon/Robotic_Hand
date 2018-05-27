#include <Servo.h>

Servo myservo,myservo2;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

const int buttonPin = 2;
const int ledPin =  13;

int buttonState = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  myservo2.attach(8);

  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    val = 1023;
  } else {
    val = 0;
  }
  
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);
  myservo2.write(val); // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}

