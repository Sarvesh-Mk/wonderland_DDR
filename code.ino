
const byte sensorPins[4] = { A0, A1, A2, A3 };
int sensorValues[4] = { 0, 0, 0, 0 };
const char padChars[4] = { 'u', 'r', 'd', 'l' };
const byte taserPins[4] = { 5, 6, 7, 8 };


void setup() {
 Serial.begin(9600);

 for (size_t i = 0; i < 4; ++i) {
  pinMode(taserPins[i], OUTPUT);
 }
}

void loop() {
 
  for (size_t i = 0; i < 4; ++i) {
    sensorValues[i] = analogRead(sensorPins[i]);

    if (sensorValues[i] > 300) {
      Serial.print(padChars[i]);
    }
  }
 
  delay(10);
}
