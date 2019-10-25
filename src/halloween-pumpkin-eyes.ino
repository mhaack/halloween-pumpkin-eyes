/*
 * halloween-pumpkin-eyes.ino
 *
 * Creepy Pumpkin Eyes Halloween project
 *
 * Version: 1.0.0
 * Author: Markus Haack (http://github.com/mhaack)
 */

#include <Servo.h>

Servo servos[10];

const int initPos = 90;
const int minPos = 30;
const int maxPos = 180;
int pos = 0;

void setup() {
    Serial.begin(115200);
    servos[0].attach(D3);
    servos[1].attach(D4);
    servos[2].attach(D0);
    servos[3].attach(D5);
    servos[4].attach(D6);
    servos[5].attach(D7);
    servos[6].attach(D8);
    servos[7].attach(RX);
    servos[8].attach(D1);
    servos[9].attach(D2);

    for (int i = 0; i < 10; i++) {
        servos[i].write(initPos);
    }
    delay(700);
}
void loop() {
    for (int i = 0; i < 1000; i++) { // performs the loop 1000 times, loop is ~0.3 sec, 1000 loops is ~5 min
        Serial.print("Loop 1: ");
        Serial.println(i);
        for (int j = 0; j < 10; j++) {
            Serial.print("Loop 2: ");
            Serial.println(j);
            pos = random(minPos, maxPos);
            servos[j].write(pos);
            if (j % 2 == 0) {
                delay(250);
            }
        }
    }

    Serial.println("Loop done");
    delay(60000); // 1 min delay until loop starts again
}