#include <Otto.h>
#include <Servo.h>
#include <Oscillator.h>
#include <EEPROM.h>

//-- First step: Configure the pins where the servos are attached
/*
         ---------------
        |     O   O     |
        |---------------|
YR 3==> |               | <== YL 2
         ---------------
            ||     ||
            ||     ||
RR 5==>   -----   ------  <== RL 4
         |-----   ------|
*/

#define PIN_YL 2
#define PIN_YR 3
#define PIN_RL 4
#define PIN_RR 5

#define TRIM_YL -10 //pierna
#define TRIM_YR -25 //pierna
#define TRIM_RL 10 //pie
#define TRIM_RR 20 //pie

Otto Lady;

void setup() {
  Lady.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, false);
  Lady.setTrims(TRIM_YL, TRIM_YR, TRIM_RL, TRIM_RR); //change Trim "offset values" gradually until Otto is completely straight (90º)
  // Otto.saveTrimsOnEEPROM(); //use only after completely straight(90º), delete this line after for further programming
}

void loop() { //test comparing before & after function
  Lady.home();
}
