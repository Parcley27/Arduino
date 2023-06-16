//include LiquidCrystal library
#include <LiquidCrystal.h>

//declare lcd connection pins
//you can declare more than one varibale at a time of the same type
//easier/faster to do it with this bc all variables are just used by lcd library
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

//initialize LiquidCrystal library object
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  //declare lcd size (width, height)
  lcd.begin(16, 2);

  //these two will never change so can be in void setup()
  //print "Time since start:" to screen
  lcd.setCursor(0, 0);
  lcd.print("Time since start:");
  
  lcd.setCursor(1, 0);
  lcd.print(0);
  
}

void loop() {  
  delay(100);
  int timeSinceStart = millis();
  // dev by 1000 but keep as int
  timeSinceStart = timeSinceStart / 1000;
  lcd.setCursor(1, 0);
  lcd.print(timeSinceStart);
    
}
