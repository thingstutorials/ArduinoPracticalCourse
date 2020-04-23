#define LED_PRACTICE 7

int led= LED_BUILTIN;
unsigned long timeDelay=500;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, !digitalRead(led));   
  delay(timeDelay);  

   //Main task.
}
