# Arduino Ultrasonic Motion Detector

A beginner Arduino project using an HC-SR04 ultrasonic sensor and a buzzer to detect objects within a defined distance.

## Overview

This project uses an Arduino Uno and an HC-SR04 ultrasonic sensor to measure the distance between the sensor and an object. When an object comes within a specified distance, the Arduino activates a buzzer.

The project was built as part of my early exploration of Arduino and embedded systems.

## Components

* Arduino Uno
* HC-SR04 ultrasonic sensor
* Buzzer
* Breadboard
* Jumper wires

## How It Works

The HC-SR04 ultrasonic sensor sends out an ultrasonic pulse and measures the time taken for the echo to return. The Arduino uses this time to calculate the distance to the object.

If the measured distance is below the defined threshold, the buzzer is activated.

## Connections

| Component    | Arduino Pin    |
| ------------ | -------------- |
| HC-SR04 VCC  | 5V             |
| HC-SR04 GND  | GND            |
| HC-SR04 TRIG | Digital Pin 9  |
| HC-SR04 ECHO | Digital Pin 10 |
| Buzzer       | Digital Pin 11  |
| Buzzer GND   | GND            |



## What I Learned

* How ultrasonic distance sensors work
* How to measure distance using an HC-SR04
* How to read sensor data with an Arduino
* How to use conditional statements to control an output
* How to troubleshoot sensor readings and hardware connections
* Basic debugging using the Arduino Serial Monitor

## Challenges

During development, the ultrasonic sensor initially returned a distance of 0 cm. I had to troubleshoot the sensor readings and Arduino code to identify the issue and get the distance measurements working correctly.



## Project Status

Completed as a beginner embedded-systems project.

More advanced versions will be developed as I continue learning Arduino and embedded systems.
