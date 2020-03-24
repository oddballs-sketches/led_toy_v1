/*
 * Oddballs 2020
 * LED Toy v1.0
 * Change whatever you want and re-upload to the chip!
 */

// set as constants if value never changes
const int button_pin = 2;
const int led_1 = 7;
const int led_2 = 6;
const int led_3 = 5;
const int led_4 = 4;
const int led_5 = 3;
const int led_6 = 12;
const int led_7 = 11;
const int led_8 = 10;
const int led_9 = 9;
const int led_10 = 8;
// array of all leds, if you need it
const int all_leds[] = {
  led_1,
  led_2,
  led_3,
  led_4,
  led_5,
  led_6,
  led_7,
  led_8,
  led_9,
  led_10
};

int button_state = 0; // button press state
int previous_state = 0; // previous button state
int animation_number = 1; // used to decide which animation to run
int speed_value = 100;

void setup() {
  Serial.begin(9600);
  // set button as input
  pinMode(button_pin, INPUT);
  //set all led's as outputs
  for (int i = 0; i < sizeof all_leds; i++){
    pinMode(all_leds[i], OUTPUT);
  }
}

void loop() {
  Serial.println(animation_number);
  check_state();
  animation_spin();
}

void check_state() {
  // read button value
  Serial.println(speed_value);
  button_state = digitalRead(button_pin);
  
  // if button was pressed
  if (button_state == 1) {
    speed_value -= 2;
    if (speed_value <= 10 && speed_value >= -50){
      animation_blink();
    }
    else if (speed_value <= -50 && speed_value >= -100){
      animation_bounce();
    }
    delay(10);
  } else if (button_state == 0){
    speed_value += 2;
    if (speed_value < 100){
      if (speed_value <= -50 && speed_value >= -100){
        animation_bounce();
      }
      else if (speed_value <= 10 && speed_value >= -50){
        animation_blink();
      }
      else if (speed_value > 10 && speed_value < 100){
        animation_spin();
      }
    }
    else {
      speed_value = 100;
    }
    
  }
}

void animation_spin(){
  // int delay_value = 20;
  digitalWrite(led_10, LOW);
  digitalWrite(led_2, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_1, LOW);
  digitalWrite(led_3, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_3, LOW);
  digitalWrite(led_5, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_4, LOW);
  digitalWrite(led_6, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_5, LOW);
  digitalWrite(led_7, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_6, LOW);
  digitalWrite(led_8, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_7, LOW);
  digitalWrite(led_9, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_8, LOW);
  digitalWrite(led_10, HIGH);
  check_state();
  delay(speed_value);
  digitalWrite(led_9, LOW);
  digitalWrite(led_1, HIGH);
  check_state();
  delay(speed_value);
}
void animation_blink(){
  int delay_value = 200;
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);
  digitalWrite(led_7, HIGH);
  digitalWrite(led_8, HIGH);
  digitalWrite(led_9, HIGH);
  digitalWrite(led_10, HIGH);
  check_state();
  delay(delay_value);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_8, LOW);
  digitalWrite(led_9, LOW);
  digitalWrite(led_10, LOW);
  delay(delay_value);
}
void animation_bounce(){
  int delay_value = 50;
  digitalWrite(led_1, LOW);
  digitalWrite(led_10, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  check_state();
  digitalWrite(led_2, LOW);
  digitalWrite(led_9, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  check_state();
  digitalWrite(led_3, LOW);
  digitalWrite(led_8, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  check_state();
  digitalWrite(led_4, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);
  delay(delay_value);
  check_state();
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  check_state();
  digitalWrite(led_4, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  check_state();
  digitalWrite(led_3, LOW);
  digitalWrite(led_8, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  check_state();
  digitalWrite(led_2, LOW);
  digitalWrite(led_9, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_10, HIGH);
  delay(delay_value);
  check_state();
}

void animation_four(){
  
}

void animation_five(){
  
}

void animation_six(){
  
}

void animation_seven(){
  
}

void animation_eight(){
  
}

void animation_nine(){
  
}

void animation_ten(){
  
}
