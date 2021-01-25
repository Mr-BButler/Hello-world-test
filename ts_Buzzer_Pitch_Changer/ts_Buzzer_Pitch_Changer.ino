/* This is the code to be completed 
   for the ThinkerShield Pitch Changer Activity    
   Written by Thinkspace www.maas.museum/thinkspace
   Ver 1.2
*/
 
// ThinkerShield has a buzzer connected to digital pin 3.
 
 
//define pins
int potPin = A5; 
int BUZZER_PIN = 3;
int LED_8 = 8;
int LED_9 = 9;
int LED_12 = 12;
int LED_10 =10;
int LED_11 =11;
int LED_13 = 13;

// Create variables to hold data we read.

void setup()
{
  // Turn the serial port on.
    Serial.begin(115200);
  
  // Initialize the buzzer.
    pinMode(buzzerPin, OUTPUT);
  
  // Initialize the lights.
    pinMode(LED_13, OUTPUT);
    pinMode(LED_8, OUTPUT);
    pinMode (LED_9, OUTPUT);
    pinMode (LED_12, OUTPUT);
    pinMode (LED_10, OUTPUT);
}


void loop()
{
digitalWrite (LED_8, HIGH); digitalWrite (LED_13, HIGH); delay (450);
tone (BUZZER_PIN, 330, 140); delay (400);
digitalWrite (LED_8, LOW); digitalWrite (LED_13, LOW);
delay (400);
tone (BUZZER_PIN, 330,140); delay (400);
digitalWrite (LED_9, HIGH); digitalWrite (LED_12, HIGH); delay (450);
tone (BUZZER_PIN, 330,330); delay (400);
digitalWrite (LED_9, LOW); digitalWrite (LED_12, LOW); delay (450);
tone (BUZZER_PIN, 330, 140); delay (450);
tone (BUZZER_PIN, 330, 140); delay (400);
tone (BUZZER_PIN, 330, 140); delay (450);
tone (BUZZER_PIN, 330, 140); delay (450);
tone (BUZZER_PIN, 392, 140); delay (460);
tone (BUZZER_PIN, 523, 140); delay (420);
tone (BUZZER_PIN, 294, 140); delay (430);
tone (BUZZER_PIN, 330, 140); delay (480);
tone (BUZZER_PIN, 349, 140); delay (412);
tone (BUZZER_PIN, 349, 140); delay (450);
digitalWrite (LED_10, HIGH); digitalWrite (LED_11, HIGH);
tone (BUZZER_PIN, 349, 140); delay (402);
 digitalWrite (LED_10, LOW); digitalWrite (LED_11, LOW);
tone (BUZZER_PIN, 349, 140); delay (450);
tone (BUZZER_PIN, 330, 140); delay (450);
tone (BUZZER_PIN, 330, 140); delay (400);
tone (BUZZER_PIN, 330, 140); delay (500);
tone (BUZZER_PIN, 330, 140); delay (400);
tone (BUZZER_PIN, 330, 140); delay (420);
tone (BUZZER_PIN, 294, 140); delay (410);
tone (BUZZER_PIN, 294, 140); delay (405);
tone (BUZZER_PIN, 330, 140); delay (430);
tone (BUZZER_PIN, 294, 140); delay (430);
digitalWrite (LED_13, HIGH); digitalWrite (LED_8, HIGH); digitalWrite (LED_9, HIGH);
digitalWrite (LED_12, HIGH); digitalWrite (LED_10, HIGH); digitalWrite (LED_11, HIGH); delay (100);
tone (BUZZER_PIN, 392, 140); delay (480);
digitalWrite (LED_13, LOW); digitalWrite (LED_8, LOW); digitalWrite (LED_9, LOW);
digitalWrite (LED_12, LOW); digitalWrite (LED_10, LOW); digitalWrite (LED_11, LOW); delay (130);
tone (BUZZER_PIN, 330, 140); delay (600);
tone (BUZZER_PIN, 330, 140); delay (400);
tone (BUZZER_PIN, 330, 140); delay (420);
tone (BUZZER_PIN, 330, 140); delay (420);
tone (BUZZER_PIN, 330, 140); delay (410);
tone (BUZZER_PIN, 330, 140); delay (430);
tone (BUZZER_PIN, 392, 140); delay (415);
tone (BUZZER_PIN, 523, 140); delay (412);
tone (BUZZER_PIN, 294, 140); delay (400);
tone (BUZZER_PIN, 330, 140); delay (430);
tone (BUZZER_PIN, 349, 140); delay (410);
digitalWrite (LED_12, HIGH); digitalWrite (LED_9, HIGH); delay (400);
tone (BUZZER_PIN, 349, 140); delay (440);
digitalWrite (LED_12, LOW); digitalWrite (LED_9, LOW); delay (400);
tone (BUZZER_PIN, 349, 140); delay (408);
tone (BUZZER_PIN, 349, 140); delay (416);
tone (BUZZER_PIN, 349, 140); delay (419);
tone (BUZZER_PIN, 330, 140); delay (420);
tone (BUZZER_PIN, 330, 140); delay (430);
tone (BUZZER_PIN, 330, 140); delay (200);
tone (BUZZER_PIN, 330, 140); delay (430);
tone (BUZZER_PIN, 392, 140); delay (415);
tone (BUZZER_PIN, 392, 140); delay (415);
tone (BUZZER_PIN, 349, 140); delay (420);
tone (BUZZER_PIN, 294, 140); delay (413);
digitalWrite (LED_13, HIGH); digitalWrite (LED_8, HIGH); digitalWrite (LED_9, HIGH);
digitalWrite (LED_12, HIGH); digitalWrite (LED_10, HIGH); digitalWrite (LED_11, HIGH); delay (300);
tone (BUZZER_PIN, 523, 140); delay (412);
}


