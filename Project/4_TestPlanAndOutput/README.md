# Test plan and output
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
