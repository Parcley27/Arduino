//Declare variables for analog joystick input
const int joystickX = A0;
const int joystickY = A1;

//Declare light variables
const int down = 2;
const int up = 3;
const int right = 4;
const int left = 5;

void setup() {
  //set light pinmodes
  pinMode(down, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(left, OUTPUT);
  pinMode(up, OUTPUT);

}

void loop() {

  //turn off all lights
  digitalWrite(down, LOW);
  digitalWrite(right, LOW);
  digitalWrite(left, LOW);
  digitalWrite(up, LOW);

  //tolerance is 64 both ways from middle
  //total of %12.5 leway each for x and y

  //if joystickX is more than z amount, turn on left LED
  if (analogRead(joystickX) > 576) {
    digitalWrite(left, HIGH);

  //if not, turn on right LED
  } else if (analogRead(joystickX) < 448) {
    digitalWrite(right, HIGH);
  }

  //if joystickY is more than z amount, turn on up LED
  if (analogRead(joystickY) > 576) {
    digitalWrite(up, HIGH);
  
  //if not, turn on down LED
  } else if (analogRead(joystickY) < 448) {
    digitalWrite(down, HIGH);
  }
}
