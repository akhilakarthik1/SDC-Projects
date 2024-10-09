#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int counter = 0; //variable that will store the count
int currentState1 = 0;
int previousState1 = 0;
int currentState2 = 0;
int previousState2 = 0;
void setup()
{
  Serial.begin(9600);
  lcd.init();					
  lcd.backlight();
  lcd.setBacklight(HIGH);
  pinMode(6,INPUT);
  pinMode(4,INPUT);


}

void loop()
{
int currentState1=digitalRead(6);
int currentState2=digitalRead(4);
Serial.println(currentState1);
 Serial.println(currentState2);
if(currentState1 != previousState1){
if(currentState1 == 1){
counter = counter + 1;
lcd.setCursor(0,0);
lcd.print("person count:");
lcd.print(counter);
}
 
}
  

Serial.println(currentState2);
if(currentState2 != previousState2){
if(currentState2 == 1){
counter = counter - 1;
lcd.setCursor(0,0);
lcd.print("person count:");
lcd.print(counter);
}
}
previousState1 = currentState1;
previousState2 = currentState2;
  delay(200);
}