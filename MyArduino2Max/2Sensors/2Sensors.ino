/*
Framework code for connecting a flex/bend sensor on A0 and the accelerometer (to be entered by you once code is verified)
 */

/*
setup() - this function runs once when you turn the Arduino on
Serial.begin initializes the serial connection with the computer; 192000 is the baud rate, match to Arduino IDE serial monitor
 */

int sensor1Pin = A0;    // select the analog input (A0) pin for sensor1. This corresponds to the Analog pins on the arduino.  
int sensor1Value = 0;  // variable to store the value coming from the sensor1

int sensor2Pin = A1;    // select the analog input (A1) pin for sensor1. This corresponds to the Analog pins on the arduino
int sensor2Value = 0;  // variable to store the value coming from the sensor2

//put accelerometer variables here (use code from accelerometer documentation

void setup()

{

Serial.begin(19200); 
                       
}

void loop()                     // run over and over again

{

 //potentiometer read code
  sensor1Value = analogRead(sensor1Pin);     //reads values from the specified analog pin, sensor 1
  sensor2Value = analogRead(sensor2Pin);     //reads values from sensor 2
  
                     
 Serial.print(sensor1Value);                     //printing the result of sensor 1
 Serial.print(", ");                            //syntax required by max serial parser patch
 //Serial.print(sensor2Value);                    //printing the result of sensor 2, or accelerometer
 Serial.println(sensor2Value);                   //The last value you send needs to be 'println' (with the ln) to sent to max serial!
 delay (10);                                      // stop the program for 10 milliseconds, might not be necessary, but this works 

}
