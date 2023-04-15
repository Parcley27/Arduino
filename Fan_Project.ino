void setup() {
  // put your setup code here, to run once:
  int motorPinA = 5;
  int motorPinB = 6;

  pinMode(A0, INPUT);

  pinMode(motorPinA, OUTPUT);
  pinMode(motorPinB, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(A0);

  analogWrite(5, -(x / 1));
  analogWrite(6,0);
}
