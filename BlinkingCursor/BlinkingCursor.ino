#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();
}

void loop()
{
	bool blinking = true;
	lcd.cursor();

	while (1) {
		if (blinking) {
			lcd.clear();
			lcd.print("END THE SUFFERING");
			lcd.noBlink();
			blinking = false;
		} else {
			lcd.clear();
			lcd.print("Existence's pain");
			lcd.blink();
			blinking = true;
		}
		delay(2000);
	}
}
