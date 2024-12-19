/* 6.200 Gamepad Button Tester */

const int numButtons = 16;
int buttonPins[numButtons] = {18,20,19,21,1,22,6,13,2,5,3,4,7,8,0,23};


void setup() {
  for (int i=0; i<numButtons; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop() {
  delay(5);
}