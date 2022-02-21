# M2-EmbSys
# Description 
* An electric pressure cooker with advanced features like integrates a timer.Depending on cooking control capability,with smart programming, which
includes pre-set cooking times and settings based on heating intensity, temperature, pressure and duration.

# Block Diagram
![PressureCooker drawio](https://user-images.githubusercontent.com/46956641/154857368-41b5291c-adef-4f66-b62e-99390bf4935c.png)

# Componenets Used
* Power supply
* ATmega Controller
* Keypad
* Motor
* LCD
* Buzzer
* Hall Effect Sensor
# Requirements
## High level requirements
| Id | Description | Category | 
|----|-------------|---------|
|HL1|Instruction for cooking|Technical|
|HL2|Automatically off cooker after particular buzzer | Technical|
|HL3|Controlling the duration of cooking and scheduling the cooking hour |Technical|

## Low level Requirements
| Id | Description | Category |
|----|-------------|---------|
|LL1|Keypad inputs which include duration,temperature|Technical|
|LL2|Motor is given input from sensor after the duration|Technical|
|LL2|Input is taken from user at what time the cooking should start|Technical|


