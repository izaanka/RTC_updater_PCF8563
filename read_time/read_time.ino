#include <Wire.h>
#include "RTClib.h"

RTC_PCF8563 rtc;

void setup() {
  Serial.begin(9600);
  Wire.begin();

  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }
  
  Serial.println("RTC Initialized. Reading time...");
}

void loop() {
  DateTime now = rtc.now();

  // print time in hh:mm:ss
  Serial.print(now.hour(), DEC); Serial.print(':');
  Serial.print(now.minute(), DEC); Serial.print(':');
  Serial.println(now.second(), DEC);

  delay(1000); 
}
