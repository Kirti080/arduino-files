// 2nd method by defining a int variable like int signal 1
//  1 method of defining
 #define LeftIr 2
 #define MainIr 3
 #define RightIr 4
 #define s_motor1 5
  #define s_motor2 6

#include <Servo.h>

Servo myservo1;//myservo is name of servo motor and defines it.
Servo myservo2;
void setup() {
 Serial.begin(9600);
 myservo1.attach(s_motor1);
 myservo2.attach(s_motor2);
 pinMode(MainIr,INPUT);
 pinMode(LeftIr,INPUT);
 pinMode(RightIr,INPUT);
}

void loop() {
int signal1=digitalRead(MainIr);
int signal2=digitalRead(LeftIr);
int signal3=digitalRead(RightIr);


if(signal1==1){
  Serial.println("start");
}
else{
  Serial.println("stop");
}
 if(signal2==0){
  myservo1.write(90);
  Serial.println("move left");
  delay(2000);
  myservo1.write(0);
}
 if(signal3==0){
  myservo2.write(90);
  Serial.println("move right");
  delay(2000);
  myservo2.write(0);

}}
