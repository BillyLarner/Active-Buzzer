// creates variables for the pins
int buttonPin = 12 ;
int buzzerPin = 9 ;

void setup() {
  pinMode (buttonPin, INPUT) ;    // sets pin 12 to an input
  pinMode (buzzerPin, OUTPUT) ;   // sets pin 9 to an output
}

void loop() {
  if (digitalRead (buttonPin) == HIGH) // while the button is in a resting state the buzzer is set to low 
      digitalWrite (buzzerPin, LOW) ;
  else
      digitalWrite (buzzerPin, HIGH) ; // when the button is pressed the buzzer is set to high
}
