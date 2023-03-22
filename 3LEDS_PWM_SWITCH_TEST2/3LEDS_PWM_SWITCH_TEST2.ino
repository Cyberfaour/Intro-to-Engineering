int switch1= 8;
int LEDpin1= 4;
int LEDpin2=12;
int reading;
int switchState= LOW;
int LEDState= LOW;
int LEDpin3=3;
int bright=0;
int increm=5;
int time=25;
int blinkCount= 10;
void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin1, OUTPUT);
pinMode(LEDpin2, OUTPUT);
pinMode (LEDpin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
reading = digitalRead(switch1); //read switch pin
for( int i = !LEDState; i<= 10; i++)
if(reading != switchState);     //

{ 
  
  if(reading == HIGH && switchState == LOW) LEDState =!LEDState;
  
   
   digitalWrite(LEDpin1, !LEDState);
   
   digitalWrite(LEDpin2, !LEDState);
   delay(100);
   
   switchState= reading ;
   
 
  analogWrite(LEDpin3, bright);
(bright= bright+increm);
if(bright<=0 || bright >= 255)increm= -increm;  
}
}
