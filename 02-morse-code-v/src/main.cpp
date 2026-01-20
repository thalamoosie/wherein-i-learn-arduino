#include <Arduino.h>

const int RED_LED_PIN = 13;
const int GREEN_LED_PIN = 11;
const int BLUE_LED_PIN = 9;
const int GLOBAL_DELAY = 1000;

void sendMessageBurst(int ledPin, String burstType, int burst, bool fullStop=false, int dotDelay = 215, int dashDelay = 550, int gapDelay = 175);

void setup() {
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(BLUE_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
}

// This is disgusting but I'm trying to not go crazy
// I should probably mathematically do something here but I'm tired
// Would be cool to take like "..." as a parameter
void loop() {
    // Red Burst sos
    sendMessageBurst(RED_LED_PIN, "dot", 3, true);
    sendMessageBurst(RED_LED_PIN, "dash", 3, true);
    sendMessageBurst(RED_LED_PIN, "dot", 3, true);
    delay(GLOBAL_DELAY * 2);
    // Green Burst WTF
    sendMessageBurst(GREEN_LED_PIN, "dot", 1);
    sendMessageBurst(GREEN_LED_PIN, "dash", 2, true);
    sendMessageBurst(GREEN_LED_PIN, "dash", 1, true);
    sendMessageBurst(GREEN_LED_PIN, "dot", 2);
    sendMessageBurst(GREEN_LED_PIN, "dash", 1);
    sendMessageBurst(GREEN_LED_PIN, "dot", 1, true);
    delay(GLOBAL_DELAY * 2);
    // Blue Burst LOL
    sendMessageBurst(BLUE_LED_PIN, "dot", 1);
    sendMessageBurst(BLUE_LED_PIN, "dash", 1);
    sendMessageBurst(BLUE_LED_PIN, "dot", 2, true);
    sendMessageBurst(BLUE_LED_PIN, "dash", 3, true);
    sendMessageBurst(BLUE_LED_PIN, "dot", 1);
    sendMessageBurst(BLUE_LED_PIN, "dash", 1);
    sendMessageBurst(BLUE_LED_PIN, "dot", 2, true);
    delay(GLOBAL_DELAY * 2);

}

/**
 * @brief Blinks an LED in short or long bursts for Morse Code
 * @param ledPin The Pin # on the microcontroller for the output
 * @param burstType Either "dot" or "dash" - the type of morse code burst to execute. Dash for long, dot for short.
 * @param burst The number of long or short bursts to execute in succession
 * @param fullStop true / false - whether or not to include a full stop after completing the loop
 * @param dotDelay Optional, custom delay length for dot type transmission
 * @param dashDelay Optional, custom delay length for dash type transmission
 * @param gapDelay Optional, custom delay in gap between dots or dashes in transmission bursts
 */
void sendMessageBurst(int ledPin, String burstType, int burst, bool fullStop, int dotDelay, int dashDelay, int gapDelay) {

    if (burst <= 0) return;
    if (burstType != "dot" && burstType != "dash") return;

    for (int i = 0; i < burst; i++) {
        if (burstType == "dot") {
            digitalWrite(ledPin, HIGH);
            delay(dotDelay);
            digitalWrite(ledPin, LOW);
            delay(gapDelay);
        } else if (burstType == "dash") {
            digitalWrite(ledPin, HIGH);
            delay(dashDelay);
            digitalWrite(ledPin, LOW);
            delay(gapDelay);
        }
    }
    if (fullStop) {
        delay(GLOBAL_DELAY);
    }


}