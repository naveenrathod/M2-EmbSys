#include <Arduino.h>
#line 1 "G:\\temp_controlled_fan\\M2_project\\M2_project.ino"
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int tempPin = A0;   // the output pin of LM35
int motorPin = 11;       // the pin where fan is
int led = 13;    // buzzer pin
int temp;
int tempMin = 10;   // the temperature to start the fan
int tempMax = 50;   // the maximum temperature when fan is at 100%
int fanSpeed;
int fanLCD;
 
#line 12 "G:\\temp_controlled_fan\\M2_project\\M2_project.ino"
void setup();
#line 26 "G:\\temp_controlled_fan\\M2_project\\M2_project.ino"
void loop();
#line 64 "G:\\temp_controlled_fan\\M2_project\\M2_project.ino"
int readTemp();
#line 12 "G:\\temp_controlled_fan\\M2_project\\M2_project.ino"
void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(tempPin, INPUT);
  lcd.begin(16,2);  
  lcd.setCursor(0,0);
  lcd.print("Fan speed ");
  lcd.setCursor(0,1);
  lcd.print("On temperature");
  delay(2000);
  lcd.clear();
  
}
 
void loop() {  
   temp = readTemp();     // get the temperature
   
   if((temp >= tempMin) && (temp <= tempMax)) {  // if temperature is higher than minimum temp
       fanSpeed = map(temp, tempMin, tempMax, 40, 160); // the actual speed of fan
       fanLCD = map(temp, tempMin, tempMax, 0, 100);  // speed of fan to display on LCD
       analogWrite(motorPin, fanSpeed);  // spin the fan at the fanSpeed speed
   } 

   if(temp < tempMin) {   // if temp is lower than minimum temp
    fanSpeed = 0;      // fan is not spinning
    fanLCD = 0; 
    digitalWrite(motorPin, LOW);       
   } 
   
   if(temp > tempMax) {        // if temp is higher than tempMax
    digitalWrite(motorPin, HIGH); 
    digitalWrite(led, HIGH);  // turn on buzzer
    delay(1000);
   } else {                    // else turn of buzzer
     digitalWrite(led, LOW); 
     delay(1000);
   }
   
   lcd.setCursor(0,0);
   lcd.print("Temperature:");
   lcd.print(temp); // display the temperature
   lcd.write(160);
   lcd.print("C  ");
   
   lcd.setCursor(0,1); // move cursor to next line
   lcd.print("Fan Speed:");
   lcd.print(fanLCD); // display the fan speed
   lcd.print("%   ");
   digitalWrite(led, HIGH);
   delay(200);
}
 
int readTemp() {  // getting the temperature 
  temp = analogRead(tempPin);
  return temp = 30;
}

