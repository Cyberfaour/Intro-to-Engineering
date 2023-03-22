int LEDpin1= 12;
int blink=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin1, OUTPUT);
blink(10, BlinkTime);
}

void loop() {
  // put your main code here, to run repeatedly:

}
void blink(int repeats, int 10);{
  for (int i = 0; i<repeats; i++);{
    digitalWrite(LEDpin1, HIGH);
    delay(100);
    digitalWrite(LEDpin1, LOW);
    delay(100);
  }
}
