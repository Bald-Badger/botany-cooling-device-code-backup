#include <SimpleDHT.h>

// for DHT22, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 7
float target_temp = 5;// change this based on your need

int pinDHT22 = 3; // pin for DHT22 data transmission
int fan = 5; // pin should've used to contorl the fan (now disabled)
int plate = 6; // pin contorl the power of the cooling plate
float temperature = 100; // init temperature to boiling
float humidity = 30; // not used
bool tempReady = false; // if a new reading from sensor is available
float power = 45; // init power

SimpleDHT22 dht22(pinDHT22); // init sensor

void setup() {
  Serial.begin(57600);
  pinMode(pinDHT22,INPUT_PULLUP);
  pinMode(fan,OUTPUT);
  pinMode(plate,OUTPUT);
  delay(100);
  readTemp();
  while(temperature > target_temp){
    digitalWrite(fan,LOW); // fan on
    drive(100); // maxium cooling power
    readTemp();
    delay(2019);
    }
  Serial.println("tempreature reached");
  // maxium power until target tempreature is reached
}

void loop() {
  digitalWrite(fan,LOW); // fan on
  drive(0); //turn off the plate, otherwise the reading would be buggy
  delay(30); // wait the voltage spike to settle down
  readTemp(); 
  if(temperature < target_temp){  // basic temp control, no PID or other fancy stuff
    power = (power - 0.5);  
    }
   else{
    power = (power + 0.5);
    }
   drive(power);
   Serial.print("driving at power:");
   Serial.println(power);
   delay(2019);
}

void drive(int power){ // map 0-255 to 0-100, for arduino, maxinum = 2^8-1 = 255
  float pwm = (float)power/100*255;
  if (pwm < 0){
    pwm  = 0;
    }
   if (pwm > 255){
    pwm = 255;
    }
    analogWrite(plate,(int)(255-pwm));
  }

void readTemp(){ // don't bother about here
  int err = SimpleDHTErrSuccess;
  float temp = temperature;// if sample fail, use last temperature reading
  if ((err = dht22.read2(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT22 failed, err="); 
    Serial.println(err);
    delay(2019);
    return;
  }
  Serial.println(temperature);
  }
