// #include <Arduino.h> DECOMENT TO RUN TP1
// /*
//  *  Project 01-blink_01
//  *      Blinks a LED changing blink frequency by pushing a key
//  *      key connected to ground, so program must add pullup resistor
//  *      Prints delay in milliseconds
//  *      Austral 2022 - IntroCom - EAM
//  */

// static const int long_delay = 1000;
// static const int short_delay = 100;

// static int old_val = 0;

// void setup(void)
// {
//     pinMode(LED, OUTPUT);
//     pinMode(PUSH1, INPUT_PULLUP);
//     pinMode(PUSH2, INPUT_PULLUP);
//     Serial.begin(BAUD);
// }
// void loop(void)
// {
//     int bit0 = !digitalRead(PUSH1);
//     int bit1 = !digitalRead(PUSH2);

//     Serial.println(bit0);
//     Serial.println(bit1);
//     delay(1000);

//     // generate decimal number from the two bits
//     int val = bit0 + bit1 * 2;

//     // ligth up the led as many times as the value
//     for (int i = 0; i <= val; i++)
//     {
//         digitalWrite(LED, HIGH);
//         delay(100);
//         digitalWrite(LED, LOW);
//         delay(100);
//     }
//     Serial.println(bit0);
//     Serial.println(bit1);
//     delay(1000);
// }
