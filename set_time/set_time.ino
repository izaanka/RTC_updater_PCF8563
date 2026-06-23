#include <Wire.h>
#include "RTClib.h"

RTC_PCF8563 rtc;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  rtc.begin();

  DateTime compiledTime = DateTime(F(__DATE__), F(__TIME__));
  
  
  TimeSpan totalDelay = TimeSpan(0, 0, 0, 7); 
  // set time span to the amount of time it takes for your computer to compile and upload the code to match for the time inaccuracy without it
  
  rtc.adjust(compiledTime + totalDelay);
  Serial.println("Time forcefully overwritten!");
}

void loop() {
  // read and print time to make sire its correct
  DateTime now = rtc.now();
  Serial.print(now.hour(), DEC); Serial.print(':');
  Serial.print(now.minute(), DEC); Serial.print(':');
  Serial.println(now.second(), DEC);
  delay(1000);
}
