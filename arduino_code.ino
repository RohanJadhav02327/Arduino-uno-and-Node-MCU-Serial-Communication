#include <SoftwareSerial.h>
SoftwareSerial espSerial(5, 6);//(RX TX)
String str;
void setup(){
Serial.begin(9600);
espSerial.begin(115200);
delay(2000);
}
void loop()
{
 str =String("hello")+String(" rohan ")+String(" jadhav ");
espSerial.println(str);
Serial.println(str);
delay(1000);
}
