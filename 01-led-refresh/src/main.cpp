#include <Arduino.h>

const int BLINK_FACTOR = 250;
const int RED_PIN = 13;
const int GREEN_PIN = 5;
const int BLUE_PIN = 9;

void blinkLED(int pinNum, int blinkFactor, int iter);

void setup() {
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
    blinkLED(RED_PIN, BLINK_FACTOR, 5);
    blinkLED(GREEN_PIN, BLINK_FACTOR, 10);
    blinkLED(BLUE_PIN, BLINK_FACTOR, 15);
}

/**
 * @brief Blinks an LED on a pin a specified number of times
 * @param pinNum The digital pin number connected to the LED
 * @param blinkFactor Delay time in ms between on and off
 * @param iter The number of iterations / blinks in a cycle
 */
void blinkLED(int pinNum, int blinkFactor, int iter) {
    for (int i=0; i < iter; i++) {
        digitalWrite(pinNum, HIGH);
        delay(blinkFactor);
        digitalWrite(pinNum, LOW);
        delay(blinkFactor);
    }

}