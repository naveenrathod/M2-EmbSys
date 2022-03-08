# Description 
* The main purpose is to adjust the fan speed based on the room temperature and display the information of adjusting fan speed with it's rpm and also about the room temperature.It also has a buzzer which will buzz everytime the fan is turned off or on.This will be very helpful in reducing the usage of electricity.
# Identifying features
* It shall show how much is the room temperature at present and also the fan speed.
* It shall increase or decrease the fan speed based on the change in temperature.
* It shall turn off and on the fan with a buzzer.
# Abstract
* Auto adjusting of fan speed is like a home automation where we don't need to change the fan speed everytime manually.It can be done using this embedded system which reads the room temperature data from the temperature sensor and auto adjusts the fan speed according to the room temperature which is done using the motor.This system will be veryful in reducing the usage of electricty because its turn off the fan automatically based of the temperature we set with a buzzer to notify.So basically when the temperature is more the fan speed will increase and will display the same on the LCD display and when temperature is low the fan speed will decrease while displaying it on the LCD display .If the temperature is same as we have set to stop then it will automatically turn off with a buzzer. 
# Requirements
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
|LL2|Motor is given input to change the speed of the fan|Technical|
|LL3|Motor is given input to turn off the fan with a buzzer|Technical|