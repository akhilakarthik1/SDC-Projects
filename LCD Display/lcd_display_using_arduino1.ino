#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x26, 16, 2);

void setup()
{
  Serial.begin(9600);
  lcd.init();					
  lcd.backlight();
  lcd.setBacklight(HIGH);
  lcd.setCursor(5,1);
  lcd.print("Akhila");
  lcd.setCursor(5,0);
  lcd.print("Karthik");
}
void loop()
{
  
}