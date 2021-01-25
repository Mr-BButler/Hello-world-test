/* This is the code to be completed 
   for the ThinkerShield Pitch Changer Activity    
   Written by Thinkspace www.maas.museum/thinkspace
   Ver 1.2
*/
 
// ThinkerShield has a buzzer connected to digital pin 3.
 
 
//define pins
int potPin = A5; 
int buzzerPin = 3; 

// Create variables to hold data we read.



void setup()
{
  // Turn the serial port on.
  Serial.begin(115200);
  
  // Initialize the buzzer.
  pinMode(buzzerPin, OUTPUT);  
}

void loop()
{
      // Read the input pin.

      
      // Map the potValue for PWM.


      Serial.println(freq);
      
      // Write the value to the buzzer.

     
}
