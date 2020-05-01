/**
 * Serial echo
 * Recieves a  byte and transmit it back.
 */
#define LED_PRACTICE 9 //Select any GPIO pin with PWM support. 

int led=LED_PRACTICE;
unsigned long timeDelay=50;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  
  if (Serial.available()) {
    int inData = Serial.read();
    Serial.write(inData);
  }
  
  //Main Task.
                                      
}
