
int redPin9=9;
int redPin3=3;
int bright1=25;
int bright2=225;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin9,OUTPUT);
pinMode(redPin3,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
// all value of 225 would be a value of HIGH
analogWrite(redPin9,bright1);
analogWrite(redPin3,bright2);



}
