#include<Servo.h>
Servo A;
void setup()
{
  A.attach(6);
}
void loop()
{
  A.write(90);
  delay(1000);
  A.write(0);
  delay(1000);
  A.write(180);
  delay(1000);
}
