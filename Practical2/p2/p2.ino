/**
 * control led via serial data.
 * Recieves a byte and change the led state.
 */
#define LED_PRACTICE 7 

int led=LED_PRACTICE;
unsigned long timeDelay=50;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  //set gpio to output.
  pinMode(led, OUTPUT);
   
}

// the loop function runs over and over again forever
void loop() { 
  if (Serial.available()) {
    char inData = char(Serial.read());
    
    if(inData=='a')
      digitalWrite(led,HIGH);
    else if (inData=='b')
     digitalWrite(led,LOW);
  }
  
  //Main Task.
                                      
}
