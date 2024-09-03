#include<Servo.h>
Servo A;
void setup()
{
 A.attach(6);
}
void loop()
{
  for(int i=0;i<=180;i++)
  {
    A.write(i);
    delay(10);
  }
  for(int i=180;i>=0;i--)
  {
    A.write(i);
    delay(10);
}
}
