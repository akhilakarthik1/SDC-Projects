void setup()
{
  pinMode(A0 ,INPUT);
  pinMode(2 ,OUTPUT);
  pinMode(3 ,OUTPUT);
}
void loop()
{
  int a = analogRead(A0);
  if(a>=750)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
  }
  else{
     digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
  }
} 