#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  lcd.begin(16,2); 
}

void loop() {
  int i;
  for(i=0;i<5;i++) {
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print("Hello");
    lcd.setCursor(0,1);
    lcd.print("BuggedComputers");
    delay(200);
  }
}
