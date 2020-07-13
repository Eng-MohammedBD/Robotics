#include <Servo.h>
Servo moto1;  // create servo object to control a servo
int x,y;

void setup()
{
  moto1.attach(5);
  pinMode(A2, INPUT);
}

void loop()
{  
  x = analogRead(A2);
  y=map (x,0,1023,0,180);
  moto1.write(y);
}
