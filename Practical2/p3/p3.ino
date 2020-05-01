/**
 * Serial echo
 * Recieves a string and transmit it back.
 */
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);   
}

// the loop function runs over and over again forever
void loop() { 
  if (Serial.available()) {
    String inData=Serial.readString();
    Serial.print(inData);
  }
  
  //Main Task.
                                      
}
