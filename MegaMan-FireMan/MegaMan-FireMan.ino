
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 11;
void setup() {

}

void midi() {

    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 329, 208.3335);
    delay(208.3335);
    tone(tonePin, 277, 208.3335);
    delay(208.3335);
    tone(tonePin, 246, 104.16675);
    delay(104.16675);
    tone(tonePin, 277, 1250.001);
    delay(1250.001);
    tone(tonePin, 277, 416.667);
    delay(416.667);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 349, 52.083375);
    delay(52.083375);
    tone(tonePin, 369, 52.083375);
    delay(52.083375);
    tone(tonePin, 391, 52.083375);
    delay(52.083375);
    tone(tonePin, 415, 52.083375);
    delay(52.083375);
    tone(tonePin, 440, 52.083375);
    delay(52.083375);
    tone(tonePin, 466, 52.083375);
    delay(52.083375);
    tone(tonePin, 493, 52.083375);
    delay(52.083375);
    tone(tonePin, 554, 468.750375);
    delay(468.750375);
    tone(tonePin, 739, 833.334);
    delay(833.334);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 739, 208.3335);
    delay(208.3335);
    tone(tonePin, 659, 208.3335);
    delay(208.3335);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 104.16675);
    delay(104.16675);
    tone(tonePin, 554, 1250.001);
    delay(1250.001);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    tone(tonePin, 739, 833.334);
    delay(833.334);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 739, 208.3335);
    delay(208.3335);
    tone(tonePin, 830, 208.3335);
    delay(208.3335);
    tone(tonePin, 739, 208.3335);
    delay(208.3335);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 739, 1666.668);
    delay(1666.668);
    tone(tonePin, 587, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 349, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    delay(208.3335);
    tone(tonePin, 440, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 493, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 523, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    tone(tonePin, 587, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 156.250125);
    delay(156.250125);
    delay(52.083375);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 587, 208.3335);
    delay(208.3335);
    delay(104.16675);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 156.250125);
    delay(156.250125);
    delay(52.083375);
    tone(tonePin, 587, 104.16675);
    delay(104.16675);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    delay(104.16675);
    tone(tonePin, 493, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 440, 104.16675);
    delay(104.16675);
    tone(tonePin, 493, 104.16675);
    delay(104.16675);
    tone(tonePin, 523, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 493, 104.16675);
    delay(104.16675);
    tone(tonePin, 523, 104.16675);
    delay(104.16675);
    delay(208.3335);
    tone(tonePin, 554, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 587, 416.667);
    delay(416.667);
    tone(tonePin, 587, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 622, 208.3335);
    delay(208.3335);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 698, 208.3335);
    delay(208.3335);
    delay(104.16675);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 329, 208.3335);
    delay(208.3335);
    tone(tonePin, 277, 208.3335);
    delay(208.3335);
    tone(tonePin, 246, 104.16675);
    delay(104.16675);
    tone(tonePin, 277, 1250.001);
    delay(1250.001);
    tone(tonePin, 277, 416.667);
    delay(416.667);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 349, 52.083375);
    delay(52.083375);
    tone(tonePin, 369, 52.083375);
    delay(52.083375);
    tone(tonePin, 391, 52.083375);
    delay(52.083375);
    tone(tonePin, 415, 52.083375);
    delay(52.083375);
    tone(tonePin, 440, 52.083375);
    delay(52.083375);
    tone(tonePin, 466, 52.083375);
    delay(52.083375);
    tone(tonePin, 493, 52.083375);
    delay(52.083375);
    tone(tonePin, 554, 468.750375);
    delay(468.750375);
    tone(tonePin, 739, 833.334);
    delay(833.334);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 739, 208.3335);
    delay(208.3335);
    tone(tonePin, 659, 208.3335);
    delay(208.3335);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 104.16675);
    delay(104.16675);
    tone(tonePin, 554, 1250.001);
    delay(1250.001);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    tone(tonePin, 739, 833.334);
    delay(833.334);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 739, 208.3335);
    delay(208.3335);
    tone(tonePin, 830, 208.3335);
    delay(208.3335);
    tone(tonePin, 739, 208.3335);
    delay(208.3335);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 739, 1666.668);
    delay(1666.668);
    tone(tonePin, 587, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 349, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    delay(208.3335);
    tone(tonePin, 440, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 493, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 523, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    tone(tonePin, 587, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 156.250125);
    delay(156.250125);
    delay(52.083375);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 587, 208.3335);
    delay(208.3335);
    delay(104.16675);
    tone(tonePin, 554, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 493, 208.3335);
    delay(208.3335);
    tone(tonePin, 440, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 156.250125);
    delay(156.250125);
    delay(52.083375);
    tone(tonePin, 587, 104.16675);
    delay(104.16675);
    tone(tonePin, 554, 208.3335);
    delay(208.3335);
    delay(104.16675);
    tone(tonePin, 493, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 440, 104.16675);
    delay(104.16675);
    tone(tonePin, 493, 104.16675);
    delay(104.16675);
    tone(tonePin, 523, 416.667);
    delay(416.667);
    delay(208.3335);
    tone(tonePin, 493, 104.16675);
    delay(104.16675);
    tone(tonePin, 523, 104.16675);
    delay(104.16675);
    delay(208.3335);
    tone(tonePin, 554, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 587, 416.667);
    delay(416.667);
    tone(tonePin, 587, 104.16675);
    delay(104.16675);
    delay(104.16675);
    tone(tonePin, 622, 208.3335);
    delay(208.3335);
    tone(tonePin, 659, 104.16675);
    delay(104.16675);
    tone(tonePin, 698, 208.3335);
    delay(208.3335);
    delay(104.16675);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 329, 208.3335);
    delay(208.3335);
    tone(tonePin, 277, 208.3335);
    delay(208.3335);
    tone(tonePin, 246, 104.16675);
    delay(104.16675);
    tone(tonePin, 277, 1250.001);
    delay(1250.001);
    tone(tonePin, 277, 416.667);
    delay(416.667);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 415, 208.3335);
    delay(208.3335);
    tone(tonePin, 369, 208.3335);
    delay(208.3335);
    tone(tonePin, 329, 104.16675);
    delay(104.16675);
    tone(tonePin, 369, 833.334);
    delay(833.334);
    tone(tonePin, 349, 52.083375);
    delay(52.083375);
    tone(tonePin, 369, 52.083375);
    delay(52.083375);
    tone(tonePin, 391, 52.083375);
    delay(52.083375);
    tone(tonePin, 415, 52.083375);
    delay(52.083375);
    tone(tonePin, 440, 52.083375);
    delay(52.083375);
    tone(tonePin, 466, 52.083375);
    delay(52.083375);
    tone(tonePin, 493, 52.083375);
    delay(52.083375);
    tone(tonePin, 554, 468.750375);
    delay(468.750375);

}

void loop() {
    // Play midi
    midi();
}
