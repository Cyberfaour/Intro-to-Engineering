#include <Keypad.h>  //needs to be in the library folder (Arduino/Libraries)
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {7 ,6,5,4}; //Row pinouts of the keypad
byte colPins[COLS] = {3 , 2, 1, 0}; //Column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600); //initialise the serial port (9600 baud)
}

void loop(){
  char key = keypad.getKey();

  if (key != NO_KEY){
    Serial.println(key); //print to serial the key that has been pressed
  }
}
