/*
 * Oddballs 2020
 * LED Toy v1.0
 * Change whatever you want and re-upload to the chip!
 */

// set as constants if value never changes
const char pot_pin = A0;
const int led_1 = 13;
const int led_2 = 12;
const int led_3 = 11;
const int led_4 = 10;
const int led_5 = 9;
const int led_6 = 8;
const int led_7 = 7;
const int led_8 = 6;
const int led_9 = 5;
const int led_10 = 4;
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

int pot_val; // analog value of potentiometer
int previous_state = 0; // previous button state
int animation_number = 1; // used to decide which animation to run
int speed_value = 100;

void setup() {
  Serial.begin(9600);
  // set button as input
  pinMode(pot_pin, INPUT);
  //set all led's as outputs
  for (int i = 0; i < sizeof all_leds; i++){
    pinMode(all_leds[i], OUTPUT);
  }
}

void loop() {
  pot_val = analogAvg(pot_pin);
  Serial.println(pot_val);

  if (pot_val < 150){
    animation_one();
  } else if (pot_val >= 150 && pot_val < 250){
    animation_two();
  } else if (pot_val >= 250 && pot_val < 350){
    animation_three();
  } else if (pot_val >= 350 && pot_val < 450){
    animation_four();
  } else if (pot_val >= 450 && pot_val < 550){
    animation_five();
  } else if (pot_val >= 550 && pot_val < 700){
    animation_six();
  } else if (pot_val >= 700 && pot_val < 850){
    animation_seven();
  } else if (pot_val >= 850 && pot_val <= 1023){
    animation_eight();
  }
}

void animation_one(){
  int delay_value = 75;
  digitalWrite(led_10, LOW);
  digitalWrite(led_2, HIGH);
  delay(delay_value);
  digitalWrite(led_1, LOW);
  digitalWrite(led_3, HIGH);
  delay(delay_value);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, HIGH);
  delay(delay_value);
  digitalWrite(led_3, LOW);
  digitalWrite(led_5, HIGH);
  delay(delay_value);
  digitalWrite(led_4, LOW);
  digitalWrite(led_6, HIGH);
  delay(delay_value);
  digitalWrite(led_5, LOW);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  digitalWrite(led_6, LOW);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  digitalWrite(led_7, LOW);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  digitalWrite(led_8, LOW);
  digitalWrite(led_10, HIGH);
  delay(delay_value);
  digitalWrite(led_9, LOW);
  digitalWrite(led_1, HIGH);
  delay(delay_value);
}

void animation_two(){
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
void animation_three(){
  int delay_value = 50;
  digitalWrite(led_1, LOW);
  digitalWrite(led_10, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  digitalWrite(led_2, LOW);
  digitalWrite(led_9, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  digitalWrite(led_3, LOW);
  digitalWrite(led_8, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  digitalWrite(led_4, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);
  delay(delay_value);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  digitalWrite(led_4, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  digitalWrite(led_3, LOW);
  digitalWrite(led_8, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  digitalWrite(led_2, LOW);
  digitalWrite(led_9, LOW);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_10, HIGH);
  delay(delay_value);
}

void animation_four(){
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
  delay(delay_value);
  digitalWrite(led_8, LOW);
  digitalWrite(led_3, LOW);
  delay(delay_value);
  digitalWrite(led_2, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_9, LOW);
  digitalWrite(led_7, LOW);
  delay(delay_value);
  digitalWrite(led_1, LOW);
  digitalWrite(led_10, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  delay(delay_value);
}

void animation_five(){
  int delay_value = 75;
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, LOW);
  digitalWrite(led_8, LOW);
  digitalWrite(led_9, LOW);
  delay(delay_value);
  digitalWrite(led_10, LOW);
  digitalWrite(led_1, HIGH);
  delay(delay_value);
  digitalWrite(led_1, LOW);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  digitalWrite(led_9, LOW);
  digitalWrite(led_2, HIGH);
  delay(delay_value);
  digitalWrite(led_2, LOW);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  digitalWrite(led_8, LOW);
  digitalWrite(led_3, HIGH);
  delay(delay_value);
  digitalWrite(led_3, LOW);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  digitalWrite(led_7, LOW);
  digitalWrite(led_4, HIGH);
  delay(delay_value);
  digitalWrite(led_4, LOW);
  digitalWrite(led_6, HIGH);
  delay(delay_value);
  digitalWrite(led_6, LOW);
  digitalWrite(led_5, HIGH);
  delay(delay_value);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH);
  delay(delay_value);
  digitalWrite(led_6, LOW);
  digitalWrite(led_4, HIGH);
  delay(delay_value);
  digitalWrite(led_4, LOW);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  digitalWrite(led_7, LOW);
  digitalWrite(led_3, HIGH);
  delay(delay_value);
  digitalWrite(led_3, LOW);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  digitalWrite(led_8, LOW);
  digitalWrite(led_2, HIGH);
  delay(delay_value);
  digitalWrite(led_2, LOW);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  digitalWrite(led_9, LOW);
  digitalWrite(led_1, HIGH);
  delay(delay_value);
  digitalWrite(led_1, LOW);
  digitalWrite(led_10, HIGH);
  delay(delay_value);
}

void animation_six(){
  int delay_value = 50;
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
  delay(delay_value);
  digitalWrite(led_1, LOW);
  delay(delay_value);
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  delay(delay_value);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(delay_value);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  delay(delay_value);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  delay(delay_value);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW);
  delay(delay_value);
  digitalWrite(led_6, HIGH);
  digitalWrite(led_7, LOW);
  delay(delay_value);
  digitalWrite(led_7, HIGH);
  digitalWrite(led_8, LOW);
  delay(delay_value);
  digitalWrite(led_8, HIGH);
  digitalWrite(led_9, LOW);
  delay(delay_value);
  digitalWrite(led_9, HIGH);
  digitalWrite(led_10, LOW);
  delay(delay_value);
  digitalWrite(led_10, HIGH);
  digitalWrite(led_9, LOW);
  delay(delay_value);
  digitalWrite(led_9, HIGH);
  digitalWrite(led_8, LOW);
  delay(delay_value);
  digitalWrite(led_8, HIGH);
  digitalWrite(led_7, LOW);
  delay(delay_value);
  digitalWrite(led_7, HIGH);
  digitalWrite(led_6, LOW);
  delay(delay_value);
  digitalWrite(led_6, HIGH);
  digitalWrite(led_5, LOW);
  delay(delay_value);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_4, LOW);
  delay(delay_value);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_3, LOW);
  delay(delay_value);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_2, LOW);
  delay(delay_value);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_1, LOW);
  delay(delay_value);
}

void animation_seven(){
  int delay_value = 100;
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
  digitalWrite(led_6, HIGH);
  delay(delay_value);
  digitalWrite(led_4, HIGH);
  delay(delay_value);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  digitalWrite(led_2, HIGH);
  delay(delay_value);
  digitalWrite(led_10, HIGH);
  delay(delay_value);
  digitalWrite(led_1, HIGH);
  delay(delay_value);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  digitalWrite(led_3, HIGH);
  delay(delay_value);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  digitalWrite(led_5, HIGH);
  delay(delay_value);
}

void animation_eight(){
  int delay_value = 50;
  delay(delay_value);
  digitalWrite(led_1, HIGH);
  delay(delay_value);
  digitalWrite(led_2, HIGH);
  delay(delay_value);
  digitalWrite(led_3, HIGH);
  delay(delay_value);
  digitalWrite(led_4, HIGH);
  delay(delay_value);
  digitalWrite(led_5, HIGH);
  delay(delay_value);
  digitalWrite(led_1, LOW);
  delay(delay_value);
  digitalWrite(led_2, LOW);
  delay(delay_value);
  digitalWrite(led_3, LOW);
  delay(delay_value);
  digitalWrite(led_4, LOW);
  delay(delay_value);
  digitalWrite(led_5, LOW);
  delay(delay_value);
  digitalWrite(led_10, HIGH);
  delay(delay_value);
  digitalWrite(led_9, HIGH);
  delay(delay_value);
  digitalWrite(led_8, HIGH);
  delay(delay_value);
  digitalWrite(led_7, HIGH);
  delay(delay_value);
  digitalWrite(led_6, HIGH);
  delay(delay_value);
  digitalWrite(led_10, LOW);
  delay(delay_value);
  digitalWrite(led_9, LOW);
  delay(delay_value);
  digitalWrite(led_8, LOW);
  delay(delay_value);
  digitalWrite(led_7, LOW);
  delay(delay_value);
  digitalWrite(led_6, LOW);
}

int analogAvg(int pin){
  int total=0;
    for(int n=0;n<32;n++){
      total= total + analogRead(pin);
    }
  return total/32;
}
