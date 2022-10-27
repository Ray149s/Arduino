int redPin9=9;
int redPin3=3;
int bright1=25;
int bright2=150;
int minn=25;
int maxx=175;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin9,OUTPUT);
pinMode(redPin3,OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
// all value of 225 would be a value of HIGH
for(int i = bright1; minn <= bright2; i+=25){
  analogWrite(redPin9,i);
  analogWrite(redPin3,bright2);
  bright2 = bright2 - 25;
  delay(250);
}
bright2 = maxx;

}
