/*Practice Lab 14; Tweak The Arduino Logo
 * Control a program on the computer for once! Using a potentiometer!
 */


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
Serial.write(analogRead(A0)/4);
//Serial.println(analogRead(A0));
delay(1);

}
