  // GLOBAL CONSTANTS
  
  const int sensorPin = A0;
  const int led1 = 4;
  const int led2 = 3;
  const int led3 = 2;
  const float baselineTemp = 20.0;


void setup()
{
  Serial.begin(9600);
  
  //
  pinMode(led1, OUTPUT);
  digitalWrite(led1, LOW);
  //
  pinMode(led2, OUTPUT);
  digitalWrite(led2, LOW);
  //
  pinMode(led3, OUTPUT);
  digitalWrite(led3, LOW);
  //

}

void loop()
{
  int sensorVal = analogRead(sensorPin);

  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  float voltage = (sensorVal/1024.0)*5.0;

  Serial.print(", Volts: ");
  Serial.print(voltage);

  float temperature = (voltage - 0.5)*100;
  Serial.print(", degrees C: ");
  Serial.println(temperature);

  if(temperature < baselineTemp)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if(temperature >= baselineTemp+6)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }

  delay(1);
}
