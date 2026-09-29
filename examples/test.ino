// test ino

#include "extras.h"
#include "OlcMsg"

OlcbMsg m;

void setup(){
  Serial.begin(115200); while(!Serial) delay(50); delay(1000);
  dP("\n test");  dP(__FILE__);
  m.print();
}
void loop(){}
