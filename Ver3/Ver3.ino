#include <SimpleDHT.h>

// for DHT22, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 7
int pinDHT22 = 3;
int fan = 5;
int plate = 6;
float temperature = 100;
float target_temp = 5;// change this 
float humidity = 30;
bool tempReady = false;
float power = 45;
SimpleDHT22 dht22(pinDHT22);

void setup() {
  Serial.begin(57600);
  pinMode(pinDHT22,INPUT_PULLUP);
  pinMode(fan,OUTPUT);
  pinMode(plate,OUTPUT);
  delay(100);
  readTemp();
  while(temperature > target_temp){
    digitalWrite(fan,LOW);
    drive(100);
    readTemp();
    delay(2019);
    }
  Serial.println("tempreature reached");
}

void loop() {
  digitalWrite(fan,LOW);
  drive(0);
  delay(30);
  readTemp();
  if(temperature < target_temp){
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

void drive(int power){
  float pwm = (float)power/100*255;
  if (pwm < 0){
    pwm  = 0;
    }
   if (pwm > 255){
    pwm = 255;
    }
    analogWrite(plate,(int)(255-pwm));
  }

void readTemp(){
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
