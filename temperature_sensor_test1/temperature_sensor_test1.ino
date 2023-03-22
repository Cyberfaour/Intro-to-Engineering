
#include <dht.h>
dht DHT;
int DHTpin=12;
int PCBpin=7;
int check;
 


void setup() {
  Serial.begin(9600);

}

void loop() {
  
check =DHT.read(DHTpin);
Serial.print("DHT11 Unit temp: ");
Serial.print(DHT.temperature,0);
Serial.print("\thumidity: ");
Serial.println(DHT.humidity,0);
check= DHT.read11(PCBpin);
Serial.print("DHT11 PCB temp: ");
Serial.print(DHT.temperature,0);
Serial.print("\thumidity: ");
Serial.println(DHT.humidity,0);
delay(1000);

  
}
