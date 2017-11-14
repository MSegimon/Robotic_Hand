# Robotic Hand (Personal Project)

My goal for this project is to design and create a robotic arm in order to teach kids about robotics and the *maker world*.


 ### Parts Needed For This Project(these are the parts that I used, you might find them cheaper somewhere else):

 * Elastic 1/8 Para cord: https://goo.gl/DjuqTM
 * 6v Rechargeable Battery: https://goo.gl/3fVmW7
 * Arduino Nano + IO Expansion Shield: https://goo.gl/JNiDEe
 * Metal Gear Servos (these are the ones I used but you can use any standard sized servo): https://goo.gl/YSkzw1
 * MYOware muscle sensor: https://goo.gl/GYe57F

And here's some code! :+1:

```javascript

#include <Servo.h>

Servo thumb, fingers;

int analogpin = 3;
int val = 0;
  void setup()
  {
    fingers.attach(9);  //Attach the servo for the four fingers to pin9
    thumb.attach(8);   // Attach the servo for the thumb to pin 8
    Serial.begin(9600);  // this is for serial monitor to see the muscle sensor value you're getting
  }
  void loop()
{
  val = analogRead(analogpin); //muscle sensor connected to pin A3 being stated as val
  Serial.println(val);
  if( val < 550) //if you flex and the sensor value is greater than 550 then close servos--adjust this value to your muscle sensor value
  {
    thumb.write(180);
    fingers.write(180);
    delay(100);
  }
else{
    thumb.write(0);
    fingers.write(0);
    delay(100);
  }
}
```


### Programs Needed For This Project:

 * [Ardiuno](https://www.arduino.cc/) To program the Arduino board
