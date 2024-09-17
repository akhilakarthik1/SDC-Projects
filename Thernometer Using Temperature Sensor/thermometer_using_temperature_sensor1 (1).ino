void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600); 
}
void loop()
{
  int a = analogRead(A0);
  float K =(float)a/1023;
  float temp = (K*500)-50;
  Serial.println(temp);
  
  
}