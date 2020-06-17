#include <Servo.h>

Servo moto1;  // create servo object to control a servo
Servo moto2;
int pos = 0;    // variable to store the servo position



void setup() {
  moto1.attach(3);  // attaches the servo on pin 3 to the servo object
  moto2.attach(5);  // attaches the servo on pin 5 to the servo object
}

void loop() {
  int D=analogRead(A0); // read the input from pot
  pos = map (D,0,1024,0,180);
  moto1.write(pos);
}

