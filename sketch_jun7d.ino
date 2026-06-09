#define MQ2_PIN 1

int baseline = 0;

void setup() {
  Serial.begin(115200);

  Serial.println("Warming up...");
  // delay(60000);

  long sum = 0;
  for(int i = 0; i < 100; i++) {
    sum += analogRead(MQ2_PIN);
    delay(10);
  }

  baseline = sum / 100;

  Serial.print("Baseline: ");
  Serial.println(baseline);
}

void loop() {
  int value = analogRead(MQ2_PIN);

  Serial.print("Value: ");
  Serial.print(value);

  if(value > baseline + 500) {
    Serial.println(" --> MEY DHUWA HU REY!");
  } else {
    Serial.println(" --> Air Clean");
  }

  delay(200);
}