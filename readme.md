# Creepy Pumpkin Eyes Halloween project

[![Build Status](https://circleci.com/gh/mhaack/halloween-pumpkin-eyes/tree/master.svg?style=shield)](https://circleci.com/gh/mhaack/halloween-pumpkin-eyes/tree/master)

Halloween is coming in a few days and here is the first of my Halloween projects this year. I wanted to rebuild a cool Arduino project I found on [YouTube](https://youtu.be/ryUNHPJ3leY) - the pumpkin with moving eyes.

The project is not that complicated and easy to rebuild, find the full instructions [on Hackster.io](https://www.hackster.io/markushaack/creepy-halloween-eyes-c6d056).

This project contains the source code to control the 10 eyes and keep them constantly moving.

## Hardware

-   ESP8266 (Wemos D1 mini, Nodemcu)
-   Wemos Protobaord or similar
-   10 mini servos e.g. SG90
-   AA Battery box holding 4 batteries
-   USB cable and power supply

I got the most parts from [Aliexpress](https://www.aliexpress.com). A full list of all the materials and tools to be build this projects can be found on Hackster.io.

## Building the circuit

The wiring is very simple. The 10 servos must be connected to positive and ground of the battery box(es). Additionally ground must be wired to GND of the ESP8266 board to build a common ground. The servo control wires are connected to one GPIO D0-D8 & TX of the ESP8266 board.

<img src="https://github.com/mhaack/halloween-pumpkin-eyes/blob/master/doc/halloween-pumpkin-eyes.png"  alt="Breadboard" width="640">

<img src="https://github.com/mhaack/halloween-pumpkin-eyes/blob/master/doc/electronics-1.jpg"  alt="Electronics 1" width="640">

<img src="https://github.com/mhaack/halloween-pumpkin-eyes/blob/master/doc/electronics-2.jpg"  alt="Electronics 2" width="640">

## Software

The software is built using PlatformIO to make life easy.

The short program starts by initializing the 10 servos on the digital output pins and then constantly keeps the servos moving by generating a random number for the next position of each servo.
