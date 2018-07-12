/*Powered By MEFSOFT*/
/*You can use you can use this program, but the publishing rights are reserved by MEFSOFT*/
/*Unauthorized publishing and sale of the program is prohibited.*/
/* V-1.1*/
/*You can change size number for yourself.*/
#include <Wire.h>                          //Include the Wire.h library so we can communicate with the gyro.
#include <EEPROM.h> 
void setup() {
int size=40; 
Serial.begin(57600);
for(int start = 0; start <= size; start++)
{
  Serial.println( EEPROM.read(start));
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
