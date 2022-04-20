## Introduction

The vehical's seat heat control system is used to control the temperature of the vehicle seat. When a person gets seated on a car, the button sensor will be activated. After that, the user gets access to turn ON the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a Atmega328 microcontroller.

## Features with timeline
- The System is capable of telling whether a person is seated or not.
- A person once seated gets the access to turn ON the heater.
- The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller.

## Strength

- Cost effective.
- Easily accessible.
- High efficiency.

## Weakness

- Overheating.

## Opportunities

- This system can be expanded by adding few more features depending on the user requirement.
- Usage of different Microcontrollers and sensors. 

## Threats

- Competition

# 4W's and 1H's

## Who
To maintain body temperature of passengers

## What
Heat control system in a vehicle

## Where
Used in almost all of the passenger vehicles

## When
When temperature is low

## How
By using sensors and microcontroller

# Detail Requirements

## High Level Requirements

|ID|Description|
|--|-----------|
|HLR1|Microcontroller unit|
|HLR2|Switches|
|HLR3|Temperature sensor|
|HLR4|Heater|
|HLR5|Display|

## Low Level Requirements

|ID|Description|HLR ID|
|--|-----------|------|
|LLR1|ATMega328|HLR1|
|LLR2|ADC and Potentiometer|HLR3|
|LLR3|Thermo electric module|HLR4|
LLR4|LED|HLR5|

