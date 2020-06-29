#include <Servo.h>

Servo moto; // create servo object to control a servo

int ir1=8; // ir sensor connect to pin 8
int ir2=9; // ir 2 connect to pin 9
int ir3=10;  // ir 3 connect to pin 10

void setup() {
  moto.attach(3);  // attaches the servo on pin 3 to the servo object
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(4,OUTPUT); // LED connect to pin 4 as a tester
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  int x=digitalRead(ir1); // check if there is input from ir1 and save it in x
  int y=digitalRead(ir2); // check if there is input from ir2 and save it in y
  int z=digitalRead(ir3); // check if there is input from ir3 and save it in z
  
  if (x == HIGH && y == LOW && z == LOW){
    moto.write(45);
    digitalWrite(4,1);
    delay(500);
    digitalWrite(4,0);
    delay(500);
  }
  else if (x == HIGH && y == HIGH && z == LOW ){
    moto.write(90);
    digitalWrite(11,1);
    delay(500);
    digitalWrite(11,0);
    delay(500);
    }
    else if (x == HIGH && y == HIGH && z == HIGH ){
    moto.write(135);
    digitalWrite(12,1);
    delay(500);
    digitalWrite(12,0);
    delay(500);
    }
    else {
      digitalWrite(4,0);
      digitalWrite(11,0);
      digitalWrite(12,0);
      moto.write(0);
      }

}
