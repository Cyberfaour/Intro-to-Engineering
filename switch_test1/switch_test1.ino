int switch1= 8;
int LEDpin= 4;
int reading;
void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
reading = digitalRead(switch1);
digitalWrite(LEDpin, reading);
}
