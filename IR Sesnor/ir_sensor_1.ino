void setup()
{
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  
  int a = digitalRead(2);
  Serial.print(a);
  delay(1000);
  if(a==1)
  {
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
}