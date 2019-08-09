//My first project! Arduino Beginner Project #2


int switchState = 0; //button variable
int button = 2;
int green = 3;
int red_1 = 4;
int red_2 = 5;

void setup() {
pinMode(button,INPUT); //button
pinMode(green,OUTPUT); //green LED
pinMode(red_1,OUTPUT); //red LED_1
pinMode(red_2,OUTPUT); //red LED_2

}

void loop() {
switchState = digitalRead(button);

if (switchState == LOW) {
 digitalWrite(green, HIGH);
 digitalWrite(red_1, LOW);
 digitalWrite(red_2, LOW);
 //button not pressed
}
else {
 digitalWrite(green, LOW);
 digitalWrite(red_1, HIGH);
 digitalWrite(red_2, LOW);

 delay(250);

 digitalWrite(green, LOW);
 digitalWrite(red_1, LOW);
 digitalWrite(red_2, HIGH);

 delay(250);
 //button is pressed
}
}
