/**
 * Written by thingstutorials.
 * Control led with serial string.
 * Recieves a string and control a led.
 * gpio:7::cmd:on
 * gpio:7::cmd:off
 */


#define LED_PRACTICE 7 

int led=-1;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  //set gpio to output.
  pinMode(LED_PRACTICE, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);    
}

// the loop function runs over and over again forever
void loop() { 
  if (Serial.available()) 
  {
    String inData=Serial.readString();
  
    int identifierIndex= -1;

    //check "gpio:" exsist and is at correct position.
    identifierIndex=inData.indexOf("gpio:");
          
    if(identifierIndex == -1 || identifierIndex !=0 ) 
    {
      Serial.println("Invalid format");
      return;
    }

    String ledString=inData.substring(5);
    
    identifierIndex=ledString.indexOf("::");

    if(identifierIndex == -1 || identifierIndex==0) 
    {
      Serial.println("Invalid format");
      return;
    }

    ledString=ledString.substring(0,identifierIndex);
    led= ledString.toInt();

    if(led==0 || led < 0)
    {
       Serial.println("Invalid gpio");
       return;
    }

    String cmdString=inData.substring(5+2+identifierIndex);

    identifierIndex=cmdString.indexOf("cmd:");


    if(identifierIndex == -1 || identifierIndex !=0 ) 
    {
      Serial.println("Invalid format");
      return;
    }

    String cmd=cmdString.substring(4);

    if(cmd=="on") 
      digitalWrite(led,HIGH); 
    else if (cmd=="off") 
     digitalWrite(led,LOW); 
    else Serial.println("Invalid cmd");

    return;
  }
  
  //Main Task.
                                      
}
