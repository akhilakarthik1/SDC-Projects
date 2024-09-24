// C++ code
//
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x26, 16, 2);
int counter = 10; //variable that will store the count
int currentState = 0;
int previousState = 0;
void setup()
{
  Serial.begin(9600);
  lcd.init();					
  lcd.backlight();
  lcd.setBacklight(HIGH);
  pinMode(6,OUTPUT);
  pinMode(4,INPUT);

}

void loop()
{
 digitalWrite(6,LOW);
 delayMicroseconds(2);
 digitalWrite(6,HIGH);
 delayMicroseconds(10);
 digitalWrite(6,LOW);
 long duration=pulseIn(4,HIGH);
 int distance=0.034*duration/2;
 Serial.print(distance);
 Serial.println("cm");
 
 if (distance >= 30 && distance <= 330){
 lcd.setCursor(0,0);
 currentState = 1;
 }
 else {
    currentState = 0;
 }
 if(currentState != previousState){
if(currentState == 1){
counter = counter -1;
lcd.setCursor(0,0);
lcd.print("person count:");
lcd.print(counter);
}
}
previousState = currentState;
 //Delay 50ms before next reading.
 delay(200);
 
}