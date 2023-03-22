int Vdivid = A0;
int LEDpin = 11; 
int thresh = 500; 
int reading, bright;
void setup()
{
pinMode(LEDpin, OUTPUT); 
}
void loop()
{
reading = analogRead(Vdivid); 
bright = 0; 
if(reading<thresh) bright = map(reading, 0, thresh, 255, 0);
analogWrite(LEDpin, bright); 
delay(1000);
}
