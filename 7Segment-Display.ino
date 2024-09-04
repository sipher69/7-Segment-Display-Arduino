const byte pinA = 4;
const byte pinB = 5;
const byte pinC = 6;
const byte pinD = 7;
const byte pinE = 8;
const byte pinF = 3;
const byte pinG = 2;

void setup() {
  for (int pin = 2; pin < 9; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {  
    DisplayNumber(i);
    delay(1000);  
  }
}

void DisplayNumber(int number) {
  switch (number) {
    case 0: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, LOW);
            break;
    case 1: digitalWrite(pinA, LOW);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, LOW);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, LOW);
            break;
    case 2: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, LOW);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, HIGH);
            break;
    case 3: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, HIGH);
            break;
    case 4: digitalWrite(pinA, LOW);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, LOW);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            break;
    case 5: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, LOW);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            break;
    case 6: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, LOW);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            break;
    case 7: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, LOW);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, LOW);
            digitalWrite(pinG, LOW);
            break;
    case 8: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, HIGH);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            break;
    case 9: digitalWrite(pinA, HIGH);
            digitalWrite(pinB, HIGH);
            digitalWrite(pinC, HIGH);
            digitalWrite(pinD, HIGH);
            digitalWrite(pinE, LOW);
            digitalWrite(pinF, HIGH);
            digitalWrite(pinG, HIGH);
            break;
    default: break;
  }
}
