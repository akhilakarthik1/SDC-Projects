// C++ code
//
void setup()
{
  
  pinMode(13,INPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  int a= digitalRead(13);
  if(a==1)
  {
    digitalWrite(6,HIGH);
  }
  else{
      digitalWrite(6,LOW);
  }
 
}