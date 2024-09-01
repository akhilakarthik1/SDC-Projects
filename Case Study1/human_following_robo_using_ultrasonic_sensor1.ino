void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,INPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
  
}
void loop()
{
  digitalWrite(11,LOW);
  delayMicroseconds(2);
  digitalWrite(11,HIGH);
  delayMicroseconds(10);
  digitalWrite(11,LOW);
  long time = pulseIn(10,HIGH);
  int distance = 0.034*time/2;
  if(distance<300)
  {
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(4,LOW);
}
  else{
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
    digitalWrite(6,LOW);
    digitalWrite(4,LOW);
  }
}