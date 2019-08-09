/*Practice Lab 13; Touchy Feely Lamp
 * just some led's, resistors, and tinfoil!
 */

#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);

int threshold = 200;
const int ledPin = 12;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
long sensorValue = capSensor.capacitiveSensor(30);
Serial.println(sensorValue);

if(sensorValue > threshold){
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(ledPin, LOW);
}
delay(50);
}
