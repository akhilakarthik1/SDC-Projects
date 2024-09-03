#include<Servo.h>
Servo A;
void setup()
{
A.attach(4);
pinMode(6,INPUT);
}
void loop()
{
 int a = digitalRead(6);
  if (a==1){
    for(int i=0;i<=180;i++){
    A.write(i);
      delay(10);
    }
    for(int i=180;i>=0;i--){
    A.write(i);
    delay(10);
    }
  }
  else{
  A.write(0);
   
  }
}