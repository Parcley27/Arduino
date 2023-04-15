//set vars to led pin outs
int red = 2;
int yellow = 3;
int green = 4;
int white = 5;

void setup() {

    //set led pins to output
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(white, OUTPUT);
  
}

void loop() {

  digitalWrite(white, HIGH);
  delay(300);

  digitalWrite(green, HIGH);
  delay(300);  
  
  digitalWrite(yellow, HIGH);
  delay(300);  

  digitalWrite(white, LOW);
  digitalWrite(red, HIGH); 
  delay(300);

  digitalWrite(green, LOW);

  delay(300);
  digitalWrite(yellow, LOW);

  delay(300);
  digitalWrite(red, LOW);

  delay(300);
  
}
