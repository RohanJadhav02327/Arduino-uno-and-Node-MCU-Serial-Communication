#include <SoftwareSerial.h>
SoftwareSerial espSerial(D7, D6);//(Rx,TX)
String data;

void setup() {
// Open serial communications and wait for port to open:
Serial.begin(9600);
espSerial.begin(115200);
}
void loop() { // run over and over
data = espSerial.readStringUntil('\r');
Serial.println(data);
}
