
// the setup function runs once when you press reset or power the board
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   
  delay(200);                  
  digitalWrite(led2, HIGH);    
  delay(200);
  digitalWrite(led3, HIGH);    
  delay(200);   
  digitalWrite(led4, HIGH);   
  delay(200);   
  digitalWrite(led5, HIGH);    
  delay(200);   
  digitalWrite(led6, HIGH);    
  delay(200);            
  digitalWrite(led6, LOW);   
  delay(200);                 
  digitalWrite(led5, LOW);    
  delay(200);
  digitalWrite(led4, LOW);    
  delay(200);   
  digitalWrite(led3, LOW);    
  delay(200);   
  digitalWrite(led2, LOW);    
  delay(200);   
  digitalWrite(led1, LOW);    
  delay(200);            
}
