// Set up variables
int readPin = A3;
int readVal;
float V2 = 0;
int delayTime = 500;

void setup()
{
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  readVal = analogRead(readPin); // Reads voltage (analog pin)
  V2 = (5./1023.) * readVal; // Convert to actual voltage
  Serial.println(V2);
  delay(delayTime);
}
