// GLOBAL CONSTANTS
const int switchPin = 2;
const int motorPin = 9;
int swtichState = 0;


// SETUP
void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(motorPin, LOW);
}

// LOOP
void loop() {
  if (digitalRead(switchPin) == HIGH) {
    digitalWrite(motorPin, HIGH);
  }
  else {
    digitalWrite(motorPin, LOW);
  }
}
