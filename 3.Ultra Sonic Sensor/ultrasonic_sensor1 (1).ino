void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT); // Set Trigger pin to 6 As Output
  pinMode(4,INPUT); // set Echo pin to 4 as Input
}
void loop()
{
  digitalWrite(6,LOW);
  delayMicroseconds(2);
  digitalWrite(6,HIGH);
  delayMicroseconds(10);
  digitalWrite(6,LOW);
  long duration= pulseIn(4,HIGH);
  float distance = 0.034* duration / 2;
  Serial.println(distance);
  Serial.print("Centi meter");
}