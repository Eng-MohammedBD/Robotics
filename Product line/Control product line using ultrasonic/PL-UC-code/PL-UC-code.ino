#include <Servo.h>

Servo moto; // create servo object to control a servo
int tr=10,ec=9; //pin of ultrasonis
int x=0; // x is the duration of the pulse
int D=0; // D is the distance
void setup() {
  moto.attach(3);  // attaches the servo on pin 3 to the servo object
  pinMode(tr,OUTPUT);
  pinMode(ec,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite(tr,LOW);
  delayMicroseconds(2);
  
  digitalWrite(tr,HIGH);
  delayMicroseconds(10);
  digitalWrite(tr,LOW);
  
  x=pulseIn(ec,HIGH);
  D=x*0.034/2; // determine the distance in cm
  Serial.print("Distance");
  Serial.println(D);  // print  the distance in Virtual Terminal
  if (D<300 && D>200) {   // Range of small carton
    moto.write(135);
  }
  else if (D<199 && D>100) { // Range of Midium carton
    moto.write(90);
  }
  else if (D<99 && D>0){ // Range of large carton
    moto.write(45);
  }

}
