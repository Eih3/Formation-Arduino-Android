
#define LED   13
#define BAUDS 9600

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(BAUDS);
}

void loop() {

  if (Serial.available() > 0) {
    byte etat = Serial.read();

    switch (etat) {
      case '1':
        digitalWrite(LED, HIGH);
        break;
      case '0':
        digitalWrite(LED, LOW);
        break;
    }
  }
}

