// Declaracion de variables
byte ledP = 13;
byte ledS = 8;
byte ledA = 3;
byte ledB = 4;
byte button = 2;
int buttonState = 0;
int buttonStateBefore = 0;
int salida = 0;

void setup() {
  pinMode(ledP, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  Serial.begin(9600);
  buttonState = digitalRead(button);
  if(buttonState == HIGH && buttonStateBefore == LOW) {
    salida = 1 - salida;
    delay(20);
  } 
  buttonStateBefore = buttonState;
  if(salida == 1) {
    digitalWrite(ledS, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledA, HIGH);
    digitalWrite(ledP, HIGH);
  } else {
    digitalWrite(ledS, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledA, LOW);
    digitalWrite(ledP, LOW);

  }
  delay(15);
}
