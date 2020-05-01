/**
 * Control led with serial string.
 * Recieves a string and control a led.
 */

#define LED_PRACTICE 7 

int led=LED_PRACTICE;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  //set gpio to output.
  pinMode(led, OUTPUT);   
}

// the loop function runs over and over again forever
void loop() { 
  if (Serial.available()) {
    String inData=Serial.readString();
    
    if(inData=="on")
      digitalWrite(led,HIGH);
    else if (inData=="off")
     digitalWrite(led,LOW);

  }
  
  //Main Task.
                                      
}
