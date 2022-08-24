#include <Arduino.h>

volatile int green_time = 2000;
volatile int yellow_time = 500;
volatile int red_time = 2000;
volatile boolean isAtRed = false;

void northSouth()
{
    if (isAtRed)
    {
        red_time = 0;
    }
    else
        green_time += 2000;
}
void eastWest()
{
    if (!isAtRed)
    {
        green_time = 0;
    }
    else
        red_time += 2000;
}

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(LEDY, OUTPUT);
    pinMode(LEDR, OUTPUT);
    pinMode(PUSH1, INPUT_PULLUP);
    pinMode(PUSH2, INPUT_PULLUP);

    attachInterrupt(digitalPinToInterrupt(PUSH1), northSouth, RISING);
    attachInterrupt(digitalPinToInterrupt(PUSH2), eastWest, RISING);
    Serial.begin(BAUD);
}

void loop()
{
    isAtRed = false;
    digitalWrite(LEDR, LOW);
    digitalWrite(LED, HIGH);
    delay(green_time);
    green_time = 2000;

    digitalWrite(LED, LOW);
    digitalWrite(LEDY, HIGH);
    delay(yellow_time);

    isAtRed = true;
    digitalWrite(LEDY, LOW);
    digitalWrite(LEDR, HIGH);
    delay(red_time);
    red_time = 2000;
}
