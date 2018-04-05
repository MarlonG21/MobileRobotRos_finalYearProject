
#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);//initializing pins
int x;
float SetDistance=0;
int Time;
int currentTime;
void setup() {
  
  lcd.begin(16, 2);            //setting LCD's number of colums and rows
  //lcd.print("2nd Distance:"); //Printing message
  lcd.setCursor(0,0);
 // lcd.print("Welcome");
  Serial.begin(9600);
 // Serial.print("enter string");
  

}
char rx_byte=0;
String rx_str = "";

void loop() {
  if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();       // get the character
 
    if (rx_byte != '\n') {
    lcd.print(rx_byte);
    }
    
  } 
  for (int positionCounter = 0; positionCounter < 1; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }
}
