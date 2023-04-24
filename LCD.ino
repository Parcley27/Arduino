//include LiquidCrtstal Library
#include <LiquidCrystal.h>

//declare x and y position analog pins
const int xPosition = A0;
const int yPosition = A1;

//declare mapped x and y variables
int mappedX = 0;
int mappedY = 0;


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
  //print "xPosition:" to screen
  lcd.setCursor(0, 0);
  lcd.print("xPosition:");
  
  //print "yPosition:" to screen
  lcd.setCursor(0, 1);
  lcd.print("yPosition:");

}

void loop() {
  //remap xPosition and yPosition values from 0 ... 1023 to -100 ... 100
  //easier for people to understand -100 to 100 than 0 to 1023
  mappedX = map(analogRead(xPosition), 0, 1023, 100, -100);
  mappedY = map(analogRead(yPosition), 0, 1023, -100, 100);

  //if mappedX is greater than or equal to 0
  if (mappedX >= 0) {
    //set cursor to after "xPosition:" printed earlier
    lcd.setCursor(11, 0);
    //print "+" to show it's positive
    lcd.print("+");
    //print mappedX
    lcd.print(mappedX);
    //print whitespace after to clear unwanted numbers
    //ex: 8 has less characters than 100, so two white spaces are needed to get rid of the 0s
    lcd.print("  ");

  //if  mappedX is not greater than or equal to 0
  } else {
    //position cursor
    lcd.setCursor(11, 0);
    //print mappedX
    //doesn't need a "+" because it's negative
    lcd.print(mappedX);
    //clear unwanted characters with white spaces
    lcd.print("  ");
  }

  //do the same, but with mappedY instead of mappedX
  if (mappedY >= 0) {
    lcd.setCursor(11, 1);
    lcd.print("+");
    lcd.print(mappedY);
    lcd.print("  ");
  } else {
    lcd.setCursor(11, 1);
    lcd.print(mappedY);
    lcd.print("  ");
  }

}