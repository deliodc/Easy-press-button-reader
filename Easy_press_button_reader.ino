/*
  Easy press button reader.
  Author: Delio Docampo Cordeiro.
  Description: This simple script reads
  the pushbutton, increases the counter,
  and returns the counter result to serial
  monitor.
*/

const int buttonPin = 2;
int buttonState = 0;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode( buttonPin, INPUT );
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if( buttonState == HIGH ){
    count++;
    Serial.print("Pressed: ");
    Serial.println(count);
    while( buttonState == HIGH ){
      buttonState = digitalRead(buttonPin);
    };
    delay(250);
  }
}
