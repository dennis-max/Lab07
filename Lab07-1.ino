#include <LiquidCrystal.h>



LiquidCrystal lcd(12,11,5,4,3,2);



void setup() {

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);

  // Print a message to the LCD.

  lcd.print("06051150");
  lcd.setCursor(0,1);
  lcd.print("Dennis");
}



void loop() {

  // set the cursor to column 0, line 1

  // (note: line 1 is the second row, since counting begins with 0):

  lcd.setCursor(0, 1);

  // print the number of seconds since reset:

 // lcd.print("Dennis");

}
