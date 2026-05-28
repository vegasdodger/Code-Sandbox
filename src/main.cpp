#include <Arduino.h>

// The onboard LED on the Lolin Wemos 32 is connected to GPIO 5.
// LED_BUILTIN resolves to 5 for the lolin32 board target.
#define BLINK_PIN LED_BUILTIN
#define BLINK_DELAY_MS 500

void setup() {
  Serial.begin(115200);
  pinMode(BLINK_PIN, OUTPUT);
  Serial.println("Blink started");
}

void loop() {
  digitalWrite(BLINK_PIN, HIGH);
  delay(BLINK_DELAY_MS);
  digitalWrite(BLINK_PIN, LOW);
  delay(BLINK_DELAY_MS);
}
