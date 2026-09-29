#include <math_logic.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  uint8_t result = add_safe(5, 10);
  Serial.print("Result: ");
  Serial.println(result);
  delay(2000);
}
