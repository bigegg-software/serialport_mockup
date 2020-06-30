
#include <FastLED.h>
String incomingByte ; // for incoming serial data

void setup() {
  Serial.begin(115200); // opens serial port, sets data rate to 9600 bps

}

void loop() {
  // send data only when you receive data:
  EVERY_N_SECONDS(1) {
    Serial.print("#");
  }


  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.readString();

    delay(700);
    // say what you got:
    Serial.println("CR+EVENT=TB_END;");
  }
}
