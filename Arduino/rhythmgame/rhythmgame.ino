/*
  DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButtonA = 2;
// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButtonB = 3;
// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButtonC = 4;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButtonA, INPUT);
  // make the pushbutton's pin an input:
  pinMode(pushButtonB, INPUT);
  // make the pushbutton's pin an input:
  pinMode(pushButtonC, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonStateA = digitalRead(pushButtonA);
  // print out the state of the button:
  if (buttonStateA) {
    Serial.println("A");
  }

  // read the input pin:
  int buttonStateB = digitalRead(pushButtonB);
  // print out the state of the button:
  if (buttonStateB) {
    Serial.println("B");
  }

  // read the input pin:
  int buttonStateC = digitalRead(pushButtonC);
  // print out the state of the button:
  if (buttonStateC) {
    Serial.println("C");
  }

  delay(1);  // delay in between reads for stability
}
