/*
 * Oddballs 2020
 * LED Toy v1.0
 * Change whatever you want and re-upload to the chip!
 */


const int button_pin = 2; // set as a constant, it never changes
int button_state = 0; // variable to hold the button press state
int previous_state = 0; // holds the previous button state
int animation_number = 0; // used to decide which animation to run

void setup() {
  Serial.begin(9600);
  // set button as input
  pinMode(button_pin, INPUT);  
}

void loop() {
  // read button value
  button_state = digitalRead(button_pin);
  
  // if button was pressed
  if (button_state == 1) {
    previous_state = 1;
    delay(10);
  } else if (button_state == 0 && previous_state == 1){
    if (num == 10){
      num = 0;
    } else {
      num ++;
    }
    previous_state = 0;
    delay(10);
    // delay to avoid contact bounce
  } else {
    prev = 0;
    delay(10);
  }
}
