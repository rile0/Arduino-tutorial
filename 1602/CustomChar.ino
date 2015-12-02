#include <LiquidCrystal.h>

byte mychar[8] = {
  0b00000,
  0b11111,
  0b10001,
  0b10001,
  0b10001,
  0b11111,
  0b11111,
  0b11111
};

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  lcd.begin(16,2); 
  lcd.createChar(0,mychar);  
}

void loop() {
  int i;
  for(i=0;i<5;i++) {
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.write(byte(0));
    lcd.setCursor(0,1);
    lcd.print("BuggedComputers");
    delay(200);
  }
}
