#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  lcd.begin(16,2); 
  lcd.setCursor(3,0);
  lcd.print("Hello");
  lcd.setCursor(0,1);
  lcd.print("BuggedComputers");
}

void loop() {
}
