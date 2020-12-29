int LED = 3;
void setup() {
digitalWrite(LED, OUTPUT);
}

void loop() {
digitalWrite(LED, HIGH);
delay(1000);
digitalWrite(LED, LOW);
delay(1000);
}
