//Testing Servo

#include <Servo.h>
Servo myServo;

const int buttonPin = 8;


void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
myServo.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin);
if(buttonState == HIGH){
  myServo.write(1023);
  delay(20);
}
else{
  myServo.write(0);
  delay(20);
}
}
