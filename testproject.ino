/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// 1V 90 - 100
// 2V 190 - 200
// 3V 290 - 300
// 4V 390 - 400
// 5V 490 - 500
// 6V 590 - 600
// 7V 690 - 700
// 8V 790 - 800
// 9V 890 - 900
// 10V 990 - 1000
// analog pins
const int speedoPin1 = A0; // mph engine 1
const int tachoPin1 = A1; // rpm engine 1
const int voltorPin1 = A2; // voltage engine 1
const int oilyPin1 = A3; // oil pressure engine 1
const int fuelPin1 = A4; // fuel level engine 1
const int tempPin1 = A5; // temperature pin engine 1

// digital pin
const int speedoTachoVoltorOilyPin2 = 13; // mph,rpm,voltage,oil pressure engine 2
const int fuelTempPin2Sync = 12; //fuel level,temperature engine 2; sync
const int rim1rim2 = 11; // rim 1 for engine 1 and rim 2 for engine 2

// analog reads
int speedoRead1 = 0; // mph value read engine 1, M
int tachoRead1 = 0; // rpm value read engine 1, T
int voltorRead1 = 0; // voltage read engine 1, V
int oilyRead1 = 0; // oil pressure read engine 1, O
int fuelRead1 = 0; // fuel level read engine 1, F
int tempRead1 = 0; // temperature reading engine 1, P
int rim1 = 0;  // rim reading engine 1, R
int sync = 0; // sync of rpms, S
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  delay(5000);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  speedoRead = analogRead(speedoPin);
  Serial.println(speedoRead);
  // Serial.println(speedoRead1String); "1 M:00.00"
  // Serial.println(tachoRead2String); "2 T:00.00"
  // Serial.println(syncReadString); "0 S:50.00" 50 = in sync
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print("ON\n");
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  Serial.print("OFF\n");
  delay(1000);                       // wait for a second
}

void writeToFile(someString){
//open file
//look for a match
//overwrite the value
//save to file
}
float analogToMPH(int analogValue){
  float mph = 0;
  return mph;  
}
