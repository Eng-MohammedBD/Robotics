int R1=8; //Relay 1 connect to pin 8
void setup() {
  pinMode(R1,OUTPUT); //  set pin 8 as output

}

void loop() {
 
  digitalWrite(R1,1); // to rotate motor clockwise
  delay(5000);
  digitalWrite(R1,0); //
  delay(5000);

}
