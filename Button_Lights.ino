//set vars to led pinouts
const int red = 2;
const int yellow = 3;
const int green = 4;
const int white = 5;

//set var to button pin in
const int button = 13;

void setup() {

  //set led pins to output
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(white, OUTPUT);

  //set button pin to input
  pinMode(button, INPUT);
  
}

void loop() {
  
  //if button not pressed?
  if (digitalRead(button) == LOW) {

    //turn on all LEDs
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(white, LOW);
    
  //if button is pressed?
  } else if (digitalRead(button) == HIGH) {

    //turn on all LEDs
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(white, HIGH);
    
  }
}
