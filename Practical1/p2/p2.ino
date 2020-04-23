#define LED_PRACTICE 7

int led=LED_PRACTICE; //LED_BUILTIN;
unsigned long timeDelay=200;

unsigned  long previousTime=0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  unsigned currentTime=millis();
  
  if(currentTime-previousTime >= timeDelay)
  {
    previousTime=currentTime;
    digitalWrite(led, !digitalRead(led));   
   }
    
  //Main Task.
                                      
}
