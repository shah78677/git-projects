/*This is a simple project that demonstrates a pattern of lights with an increase and decrease in the fading levels of leds on an bread board with analog inputs.*/

int led1 =11;
int led2 = 10;
int led3 = 9;
int led4= 6;
int led5 = 5;
int led6 = 3;

// the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led1, brightness );
  delay(30);
  analogWrite(led2, brightness);
  delay(30);
  analogWrite(led3, brightness);
  delay(30);
  analogWrite(led4, brightness);
  delay(30);
  analogWrite(led5, brightness);
  delay(30);
  analogWrite(led6, brightness);
  delay(30);
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;
analogWrite(led1, fadeAmount );
  delay(40);
  analogWrite(led2, fadeAmount);
  delay(40);
  analogWrite(led3, fadeAmount);
  delay(40);
  analogWrite(led4, fadeAmount);
  delay(40);
  analogWrite(led5, fadeAmount);
  delay(40);
  analogWrite(led6, fadeAmount);
  delay(40);
  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    
  }
  // wait for 30 milliseconds to see the dimming effect
 
}
