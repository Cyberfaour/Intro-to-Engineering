int switch1= 8;
int LEDpin1= 4;
int LEDpin2=12;
int reading;
int switchState= LOW;
int LEDState= LOW;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin1, OUTPUT);
pinMode(LEDpin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
reading = digitalRead(switch1); //read switch pin
if(reading != switchState);     //
{ 
      delay(50);                         // debounce time of 50ms   
      reading = digitalRead(switch1);  // read switch pin again   
      if(reading != switchState)
             
{  if(reading == HIGH && switchState == LOW) LEDState =!LEDState;
  digitalWrite(LEDpin1, LEDState);
  digitalWrite(LEDpin2, !LEDState);
  switchState= reading ;
}
}
}   
  


  
