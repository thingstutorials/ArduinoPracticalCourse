#define LED_PRACTICE 9 //Select any GPIO pin with PWM support. 

int led=LED_PRACTICE; //LED_BUILTIN;

int brightnessMax=255;
int brightnessMin=0;
int brightnessStep=10;

unsigned long timeDelay=50;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
}

/**
 * This function will increase the brightness.
 */
void dimUp()
{

  for(int brightness=brightnessMin; brightness <= brightnessMax; brightness+=brightnessStep)
  {
      analogWrite(led,brightness);
      delay(timeDelay);
      
   }
   
 }

/**
 * This function will decrease the brightness.
 */

 void dimDown()
{
    for(int brightness=brightnessMax; brightness >= brightnessMin ; brightness-=brightnessStep)
  {
      analogWrite(led,brightness);
      delay(timeDelay);
   }
   
 }
 
// the loop function runs over and over again forever
void loop() {
 
  dimUp();
  dimDown();
  
  //Main Task.
                                      
}
