/**
 * By thingstutorials.
 * Control led with serial string.
 * Recieves a string and control a led.
 * cmd:on
 * cmd:off
 */


#define LED_PRACTICE 7 

int led=LED_PRACTICE;

String CommandIdentifier= String("cmd:");

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
    
    // get the index of :
    int identifierIndex=inData.indexOf(CommandIdentifier);
          
    if(identifierIndex == -1) 
    {
      Serial.println("Invalid format");
    }

    String cmd=inData.substring(4);
 
    if(cmd=="on")
      digitalWrite(led,HIGH);
    else if (cmd=="off")
     digitalWrite(led,LOW); 
     else 
      Serial.println("Invalid cmd");

  }
  
  //Main Task.
                                      
}
