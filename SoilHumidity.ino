int waterPump = 13;
void setup() {
  Serial.begin(9600);
  pinMode(waterPump, OUTPUT);
}

void loop() {
  int humidityRaw = analogRead(A0); // 1023 to 0 ===> 0 to 100%
  int humidityReal = map(humidityRaw, 1023, 0, 0, 100);
  Serial.println(humidityReal);
  delay(100);
  if (humidityReal < 90)
  {
    digitalWrite(waterPump, HIGH);
  }else{
    digitalWrite(waterPump, LOW);
  }
}
