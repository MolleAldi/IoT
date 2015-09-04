const int ledPin = 9;          
const int buttonPin = 2;        

void setup() {
  pinMode (ledPin, OUTPUT);
  pinMode (buttonPin, INPUT);
}

void loop() {
  while (digitalRead(buttonPin) == HIGH) {
    analogWrite(ledPin, HIGH);
  }
}    
