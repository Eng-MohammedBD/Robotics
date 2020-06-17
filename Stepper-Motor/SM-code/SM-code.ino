#include <Stepper.h>

int spr = 20 ;
int D=0;
int x=0;
int c1=10; // control one
int c2=11; // control two

Stepper stepper(spr, 3, 4, 8, 9); //define motor pins and steps

void setup() {
  stepper.setSpeed(60); // set the speed of the motor to 60 RPMs
  pinMode(c1,INPUT);   // c1 & c2 logics to control direction of the motor
  pinMode(c2,INPUT);
  
}

void loop() {
  int p=digitalRead(c1);
  int n=digitalRead(c2);
  x=analogRead(A0);   //read input from pin A0
  D = map (x,0,1024,200,1000);  

  if ( p==1 && n==0) {
    //x=analogRead(A0);
    //D = map (x,0,1024,200,1000);
    stepper.step(5);
    delay(D);
  }
  else if (p==0 && n==1) {
    //x=analogRead(A0);
    //D = map (x,0,1024,200,1000);
    stepper.step(-5);
    delay(D);
  }
  else {stepper.step(0);}
 
  
 
}
