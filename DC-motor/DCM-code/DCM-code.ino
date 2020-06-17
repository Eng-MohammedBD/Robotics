int in1=7;
int in2=6;
int en1=5;
int en2=4;
int in3=3;
int in4=2;
int c1=9;
int c2=10;
int x1;
int x2;

void setup() {
  // definition the input from L293D
  pinMode(in1,OUTPUT); 
  pinMode(in2,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  // add two logics to control direction of the rotate
  pinMode(c1,INPUT);
  pinMode(c2,INPUT);

}

void loop() {
  // Read the Input (Logics)
  x1=digitalRead(c1);
  x2=digitalRead(c2);
  // on/off the motors according to input
  if (x1==1) {
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  }
  else{digitalWrite(in1,0); digitalWrite(in2,0);}
  if (x2==1) {
  digitalWrite(in3,1);
  digitalWrite(in4,0);
  }
  else{digitalWrite(in3,0); digitalWrite(in4,0);}

}
