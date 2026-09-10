#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);  //lcd(rs,en,D4,D5,D6,D7)  Instance1
//LiquidCrystal lcd2(13,12,11,10,9,8);  //lcd(rs,en,D4,D5,D6,D7)   Instance2   

void setup() {
  lcd.begin(16,2);
  
  lcd.print("LCD DEMO");
  delay(1000);
//  lcd.clear();
}

void loop() {
  lcd.setCursor(0,1); // jekhane likhata display korate chai   setCursor(COLOUMN,ROW)
  lcd.print("Hello World");
  delay(1000);
  lcd.clear();
}
