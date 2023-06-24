// Declaracion de variables
byte ledP = 13;
byte button = 2;

int buttonState = 0;

int salida = 0;

void setup() {
  pinMode(ledP, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  Serial.begin(9600);
  buttonState = digitalRead(button);
  if(buttonState == HIGH) {
    digitalWrite(ledP, HIGH);
  } else {
    digitalWrite(ledP, LOW);
  }
  delay(15);
}
