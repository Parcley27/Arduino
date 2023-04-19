const int joystickX = A1;
const int joystickY = A2;

const int down = 2;
const int right = 3;
const int left = 4;
const int up = 5;

const int joystickButton = 8;

void setup() {
  pinMode(joystickButton, INPUT);

  pinMode(down, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(left, OUTPUT);
  pinMode(up, OUTPUT);

}

void loop() {

  digitalWrite(down, LOW);
  digitalWrite(right, LOW);
  digitalWrite(left, LOW);
  digitalWrite(up, LOW);

  if (513 < analogRead(joystickX)) {
    digitalWrite(right, HIGH);
  } else if (511 > analogRead(joystickX)) {
    digitalWrite(left, HIGH);
  }

  if (513 < analogRead(joystickY)) {
    digitalWrite(up, HIGH);
  } else if (511 > analogRead(joystickY)) {
    digitalWrite(down, HIGH);
  }

  if (digitalRead(joystickButton) == HIGH) {
    digitalWrite(down, HIGH);
    digitalWrite(right, HIGH);
    digitalWrite(left, HIGH);
    digitalWrite(up, HIGH);
  }  
}
