
#define BAUDS 9600

void setup() {
  Serial.begin(BAUDS);
}

void loop() {
  Serial.println("Mon premier programme avec le port série !");
  delay(1000);
}

