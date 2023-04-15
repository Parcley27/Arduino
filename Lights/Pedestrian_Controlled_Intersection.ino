//walk light pins
int walk = 5;

//traffic light pins
const int green = 4;
const int yellow = 3;
const int red = 2;

//button sensor pin
const int button = 13;

//counter and reset time
int timeSinceLastChange = 0;
const int maxIdleTime = 750;

//declare a function to toggle the inputted light
void toggleLight(int lightToChange) {

  //check if lightToChange is on or off
  if (digitalRead(lightToChange) == HIGH) {
    //if it's on, turn it off
    digitalWrite(lightToChange, LOW);

  //if the light is not on, do this instead
  } else {
    //turn on the givin light
    digitalWrite(lightToChange, HIGH);
    
  }
}

void setup() {
  //set walk light pin to output
  pinMode(walk, OUTPUT);

  //set traffic light pins to output
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);

  //set button pin to input
  pinMode(button, INPUT);
}

void loop() {
  //check if button is being pressed
  if (digitalRead(button) == HIGH) {
    
    digitalWrite(green, HIGH);
    delay(2500);

    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(1500);

    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);

    for (int i = 1; i <= 10; i++) {
      delay(maxIdleTime);
      toggleLight(walk);
      
    }

    delay(1000);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);

    timeSinceLastChange = 0;
    
  } else {
    if (timeSinceLastChange > maxIdleTime) {
      toggleLight(green);
      timeSinceLastChange = 0;
      
    } else {
    timeSinceLastChange += 1;
    delay(1);    
    
    }
  }
}
