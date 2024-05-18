int redPin = 9;
int bright = 255;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(redPin, bright);
}
