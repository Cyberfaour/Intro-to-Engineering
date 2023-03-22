 
int red1 = 13;
 int red2= 12;


void setup() {
  // put your setup code here, to run once:

  pinMode(red1, OUTPUT);
 pinMode(red2 ,OUTPUT);
}
 

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red1 ,HIGH);
  delay(3000);
 digitalWrite(red1,LOW);
 delay(50);
 digitalWrite(red2,HIGH);
  delay(3000);
  digitalWrite(red2,LOW);
  delay(50);


}  

 
