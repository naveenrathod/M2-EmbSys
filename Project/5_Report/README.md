# Table of content
* 1. About the project
    * Description
    * Identifying features
    * Abstract
* 2. Requirements
    * High level requirements
    * Low level requirements
* 3. Architecture
    * Components used
    * Block Diagram
    * Flowchart
* 4. Implementation
* 5. Test plan and output
    * High level test plan
    * Low level test plan
* 6. Output 
    * Code execution output
    * Simulation output

## 1. About the project
## Description 
* The main purpose of the project is to adjust the fan speed based on the room temperature and display the information of adjusting fan speed and also about the room temperature.It also has a buzzer which will buzz everytime there is change in temperature.This will be very helpful in reducing the usage of electricity.Here if the temperature is more than the specified temperature then the fan speed will increase and in case of low temperature the fan speed will decrease.
## Identifying features
* It shall obtain the temperature and fan speed.
* It shall display how much is the room temperature and also the fan speed.
* It shall increase or decrease the fan speed based on the change in temperature.
* It shall turn off and on the fan with a buzzer.
## Abstract
* Auto adjusting of fan speed is like a home automation where we don't need to change the fan speed everytime manually.It can be done using this embedded system which reads the room temperature data from the temperature sensor and auto adjusts the fan speed according to the room temperature which is done using the motor.This system will be veryful in reducing the usage of electricty because its turn off the fan automatically based of the temperature we set with a buzzer to notify.So basically when the temperature is more the fan speed will increase and will display the same on the LCD display and when temperature is low the fan speed will decrease while displaying it on the LCD display .If the temperature is same as we have set to stop then it will automatically turn off with a buzzer. 
## 2. Requirements
## High level requirements
| Id | Description | Category | 
|----|-------------|---------|
|HL1|Display the room temperature and fan speed|Technical|
|HL2|Automatically adjust fan speed based on the room temperature | Technical|
|HL3|Turn off or on the fan with a buzzer |Technical|

## Low level Requirements
| Id | Description | Category |
|----|-------------|---------|
|LL1|Obtaining the data from the sensor and actuator |Technical|
|LL2|Check if the temperature is greater or less than the maximum and minimum temperature specified|Technical|
|LL3|Motor is given input to change the speed of the fan|Technical|
|LL4|Motor is given input to turn off the fan with a buzzer|Technical|
##  3. Architecture
## Components Used
* Power supply
* Arduino UNO
* Motor
* Motor driver
* LCD
* Buzzer
* Temperature Sensor
## Arduno UNO
* Arduino Uno is a microcontroller board used has ATmega328 from AVR family which controls the all process to be carried out in the system.
* There are 14 digital input/output pins,6 Analog pins,a 16 MHz ceramic resonator,USB connection,power jack and also has reset button.
* It's software supported by a number of libraries that makes the programming easier.
##  Motor Driver
* L293D is a motor driver IC which is used to connect the motor with the microcontroller and provide them sufficient voltage supply to the design.
* L293D has 16-pins in which four are input pins,four are output pins,two are enable pin,four GND pins and two pins for power supply.It is used to control motors.
## Temperature Sensor
* A temperature sensor is a device used to measure temperature.
* The Temperature Sensor LM35 series are precision integrated-circuit temperature devices with an output voltage linearly proportional to the Centigrade temperature.
## LCD Display
* The term LCD stands for liquid crystal display. It is one kind of electronic display module used in an extensive range of applications like various circuits & devices like mobile phones, calculators, computers, TV sets, etc. These displays are mainly preferred for multi-segment light-emitting diodes and seven segments. 
* A 16×2 LCD has two registers like data register and command register. The RS (register select) is mainly used to change from one register to another. When the register set is ‘0’, then it is known as command register. Similarly, when the register set is ‘1’, then it is known as data register.
## Buzzer
* An arduino buzzer is also called a piezo buzzer. It is basically a tiny speaker that you can connect directly to an Arduino. You can make it sound a tone at a frequency you set.
## Block Diagram
![Block_Diagram](https://user-images.githubusercontent.com/46956641/157297302-09963478-ba2b-49e2-bb2f-dbd1cf86c302.png)
## Flowchart
![Flowchart_Fan drawio (1)](https://user-images.githubusercontent.com/46956641/155835305-f2a41af7-180e-4d82-ae6d-13c826250ff6.png)
## 5. Test plan and output
## High level test plan
|Test ID |Description |Expected input |Expected output |Actual output |Status|
|---------|-----------------|---------| --------|--------|-------|
|HL_01 |Display the room temperature and fan speed |Program execution |Formatted display with temperature in degree celsius and fan speed in percentage|Formatted display with temperature in degree celsius and fan speed in percentage|:heavy_check_mark:|
|HL_02 | Obtaining the temperature|Program execution |Display the temperature on LCD |Display the temperature on LCD |:heavy_check_mark:|
|HL_03 | Obtaining the fan speed |Program execution|Display the fan speed on LCD|Display the fan speed on LCD|:heavy_check_mark:|
|HL_04 | Controlling the fan speed |Program execution |Change in fan speed according to temperature |Change in fan speed according to temperature|:heavy_check_mark:|

## Low level test plan
|Test ID |Description |Expected input |Expected output |Actual output |Status|
|---------|-----------------|---------| --------|--------|-------|
|LL_01 |Comparing the obtained temperature with the maximum and minimum temperature |Program execution |Input to the motor |Input to the motor|:heavy_check_mark:|
|LL_02|Check if the temperature is greater than the maximum temperature|Program execution |Increase the fan speed |Change in fan speed|:heavy_check_mark:|
|LL_03|Check if the temperature is less than the minimum temperature|Program execution |Decrease the fan speed |Change in fan speed|:heavy_check_mark:|
|LL_04 |After a change in fan speed buzzer is set|Program execution |Buzzer in on|Buzzer in on|:heavy_check_mark:|
## Output
* Code output
![Code_Output](https://user-images.githubusercontent.com/46956641/157339708-b515d747-cd1f-4ff0-925a-2a74db6ccd9e.png)
* Simulation output 1 
![Simulation_1](https://user-images.githubusercontent.com/46956641/157339719-f4c68b5e-5791-4a77-8ff8-dce62d6ab63a.png)
* Simulation output 2
![Simulation_2](https://user-images.githubusercontent.com/46956641/157339721-b81625ee-787f-45cf-bf51-80e44e82e679.png)
