#include <Servo.h>

Servo servos[10];

const int initPos = 90; // variable to store the servo position
const int minPos = 45;
const int maxPos = 280;
int pos = 0;

void setup()
{
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
void loop()
{
    // Serial.println("Calibration");
    // servos[5].write(45);
    // delay(1000);
    // servos[5].write(120);
    // delay(1000);
    // servos[5].write(280);
    // delay(5000);
    // Serial.println("Calibration done");

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
    delay(60000); //1 min delay until loop starts again
}