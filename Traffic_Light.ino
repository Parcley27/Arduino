//set vars to led pin outs
int red = 2;
int yellow = 3;
int green = 4;

void setup() {

    //set led pins to output
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
  
}

void loop() {
  //green on, then wait
  digitalWrite(green, HIGH);
 
  delay(1000);

  //evolove light to yellow, wait
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);

  delay(1000);

  //evolve light to red, wait
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);

  delay(1000);

  //turn of all leds
  digitalWrite(red, LOW); 
}
