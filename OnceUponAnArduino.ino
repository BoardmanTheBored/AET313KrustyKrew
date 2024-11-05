#include <Servo.h>

const int SignSwitchPin = 1;
const int SquidwardSwitchPin = 2;
const int SpongebobSwitchPin = 3;
const int SpongebobSpatulaPin = 4;
const int PhoneSwitchPin = 5;
const int SlasherSwitchPin = 6;
const int SlasherSpatulaPin = 7;

const int LightsLEDPin = 8;
const int PhoneLEDPin = 9;

Servo ChestLid = 10;
Servo SpongebobDoor = 11;
Servo Bus = 12;
Servo SlasherTrack = 13;
Servo Front Doors = 14;
Servo Curtains = 15;

void setup() {
  PinMode(SignSwitchPin, INPUT);
  PinMode(SquidwardSwitchPin, INPUT);
  PinMode(SpongebobSwitchPin, INPUT);
  PinMode(SpongebobSpatulaPin, INPUT);
  PinMode(PhoneSwitchPin, INPUT);
  PinMode(SlasherSwitchPin, INPUT);
  PinMode(SlasherSpatulaPin, INPUT);
  PinMode(LightsLEDPin, OUTPUT);
  PinMode(PhoneLEDPin, OUTPUT);
//Cullen did this


  
}

void loop() {
  

}
