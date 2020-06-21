int R1=8; //Relay 1 connect to pin 8
int R2=2; //Relay 2 connect to pin 2
void setup() {
  pinMode(R1,OUTPUT); //  set pin 8 as output
  pinMode(R2,OUTPUT); //  set pin 2 as output

}

void loop() {
 
  digitalWrite(R1,1); // to rotate motor clockwise
  digitalWrite(R2,0);
  delay(5000);
  digitalWrite(R1,0); //
  digitalWrite(R2,1); // to rotate motor counterclockwise
  delay(5000);

}
