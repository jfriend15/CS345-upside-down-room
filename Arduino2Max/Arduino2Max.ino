
/** 
 *  Get serial data from pressure sensors and format for Max
 */

// Velostat
int sensor1Pin = A0;     
int sensor1Value = 0;  

// FSR
int sensor2Pin = A1;   
int sensor2Value = 0;  

void setup(){
  Serial.begin(19200);                       
}

void loop() {
  sensor1Value = analogRead(sensor1Pin);     
  sensor2Value = analogRead(sensor2Pin);     
  
  Serial.print(sensor1Value);                    
  Serial.print(", ");                            //syntax required by max serial parser patch
  Serial.println(sensor2Value);                  //The last value you send needs to be 'println' (with the ln) to sent to max serial!
  delay (10);                                       

}
