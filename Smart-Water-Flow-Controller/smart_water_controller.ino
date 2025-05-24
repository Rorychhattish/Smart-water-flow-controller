int water;

void setup() {
  pinMode(3, OUTPUT);     // Relay signal output
  pinMode(6, INPUT);      // Water sensor input
}

void loop() {
  water = digitalRead(6); 
  if (water == HIGH) {
    digitalWrite(3, LOW);   // Turn OFF relay
  } else {
    digitalWrite(3, HIGH);  // Turn ON relay
  }
  delay(400);
}
