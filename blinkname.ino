int led1 = D2;
int led2 = D7;

int unitDelay = 200;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop() {
    dit(); dit(); dah(); delay(unitDelay*3); // S
    dit(); dah(); delay(unitDelay*3); // A
    dah(); dah(); delay(unitDelay*3); // M
    delay(unitDelay*4);
}

void dit() {
    ledOn();
    delay(unitDelay);
    ledOff();
    delay(unitDelay);
}
void dah() {
    ledOn();
    delay(unitDelay*3);
    ledOff();
    delay(unitDelay);
}
void ledOn() {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
}
void ledOff() {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
}