# RTC_updater_PCF8563
Update your RTC module (Specifically PCF8563)
*PINOUT
1. SCL - A5
2. SDA - A4
3. VIN - 3.3V/5V
4. GND - GND
*STEPS
1. upload set_time.ino to set the time from your pc clock, set delay as needed
2. upload show_time.ino instantly after your time is set to prevent any rewriting due to power reset to the arduino UNO/NANO
