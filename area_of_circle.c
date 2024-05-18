// Set up variables
int waitT = 750;
float pi = 3.14;
float r = 2;
float area;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  area = pi * r*r;
  Serial.print(" A circle with radius ");
  Serial.print(r);
  Serial.print(" has an area of ");
  Serial.println(area);
  delay(waitT);
  r = r + 0.5;
}
