#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  lcd.begin(16,2); 
  lcd.print("Hello");
  delay(1000);
  lcd.clear();
  lcd.print("BuggedComputers");
}

void loop() {
}
