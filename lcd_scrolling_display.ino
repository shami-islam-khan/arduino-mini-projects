#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
LiquidCrystal lcd2(13, 12, 11, 10, 9, 8);

void setup() {
  lcd.begin(16, 2);
  lcd2.begin(16, 2);
  lcd.print("Shami Islam Khan");
  delay(1000);
  lcd.clear();
}

void loop() {
  scrollText("Hello World", 100);
}

void scrollText(String text, int delayTime) {
  int textLength = text.length();
  
  for (int i = 0; i <= textLength + 16; i++) {
    lcd.clear();
    
    int startCol = (i <= 16) ? 0 : (i - 16);
    int endCol = (i <= 16) ? i : 16;
    
    for (int col = startCol; col < endCol; col++) {
      int textIndex = col - startCol;
      lcd.setCursor(col, 0);
      lcd.print(text[textIndex]);
    }
    
    delay(delayTime);
  }
}
