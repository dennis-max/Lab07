char val;
#include <LiquidCrystal.h> // include the library code
LiquidCrystal lcd(12, 11, 10, 4, 3, 2); // initialize interface pins
void setup() {
lcd.begin(16, 2); // set up the LCD's number of columns and rows:
Serial.begin(9600); // Print a message to the LCD.

}
void loop() {
  if (Serial.available()) {
    delay(200);
    lcd.clear();
    lcd.setCursor(0,0);
    while (Serial.available()>0) {
      lcd.write(Serial.read());
    }
  }
}
