const int ldrPin = 34;
const int ledPin = 2;

void setup() {

  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);

  Serial.println("Smart Street Light System");
}

void loop() {

  int lightValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if(lightValue < 2000) {

    digitalWrite(ledPin, HIGH);

    Serial.println("Dark Environment");
    Serial.println("Street Light ON");

  }
  else {

    digitalWrite(ledPin, LOW);

    Serial.println("Bright Environment");
    Serial.println("Street Light OFF");
  }

  Serial.println("------------------");

  delay(2000);
}
