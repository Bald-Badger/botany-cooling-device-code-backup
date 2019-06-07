# botany-cooling-device-code-backup
this is the instructions (as well as code back up ) of the cooling device I've been working on for Dr. Barker.

all instructions are based on windows 10, for other OS versions, Google can do a better job than me.

step 1, install arduino software (windows 10 only) :
  1. go to Microsoft Store (should be in your computer)
     if you don't have microsoft store installed, download it from https://www.arduino.cc/en/Main/Software
  2. search for Arduino
  3. download it
  
step 2, get to know about Arduino (recommended, but not required):
  some useful links:
  1. https://www.youtube.com/watch?v=nL34zDTPkcs
  2. https://www.arduino.cc/en/Guide/HomePage
  
step 3, add your code:
  1. download the "SimpleDHT" floder, place it in your arduino library floder
     the path should looks like something like this: C:\Users\GeniusBadger\Documents\Arduino\libraries
  2. download the "Ver3" folder, put it to anywhere you want, like desktop 
  
step 4, use the code:
  1. go into the Ver3 folder you just downloaded, go into there, doulbe click on the Ver3.ino, arduino software should pop out
  2. change the 'target_temp' and 'power' variable based on need
  3. find out whick port of your computer is the arduino is using (do not skip steps below)
    a) connect arduino to your PC 
    b) open Win10 device manager (google it if you can't find it)
    c) click on "port (COM and LPT)" (something like this)
    d) see what's there
    e) unplug arduino
    e) see what's missing
    f) plug arduino back in
    g) see what's back
    h) the new thing shouwing up is the arduino, remember its port number
  4. keep arduino connected, open arduino software
  5. go to tools-development board; choose arduino/Genuino Uno
  6. go to tools- port, choose the port you saw in step 4-3-h
  7. upload the code by clicking the right arrow on the left top corner of the arduino software
  8. the code should upload successfully
  9. power up and do experiments!!
  
step 5, Temprature monitor (optional):
  if you want to monitor temprearure, after step 4-8, open tools-serial monitor, and choose port rate of 57600
  one or two error message might appear on the serial monitor once you open it, as well as powering it on. this is normal due to voltage   inrush.
  
step 6, how to use the device:
  1. plug the arduino to a power source (like your PC)
  2. give a good press on the blue relay on the device (the same force as you petting your dog) to make sure the thermal contact of the power transistor below that relay. 
  3. pulg in the main power cable
  4. the tempreature should stablize in around 2 minutes
  5. attatch the plant leaf on the white cooling plate.

Notice and warnings:
  1. do not operate this device over one hour, not because it would harm the device, but I haven't pressure tested it over one hour, and I have no idea what would happed beyound that 
  2. do step 6-2 again, it's very important. device may overheat and broke if not performed.
  3. do not touch any moving part (e.g. fan) or any metal part (e.g. power supply).
  4. contact Marvin for any electrical issue, and contact me for any mechanical or programming issue. 
     Dr. Barker have contact info of both of us.
  5. any tempreature fluctuation ± 0.6℃ around target tempreature after powering on for 2 minutes is expected and normal, 
     breaking this range is considered a programming isuue, and please contact Shuai.
     
 Contributions:
   Shuai Zhang: circuit diagram design, assembly, programming
   Marvin Zhang: circuit construction
  
Good luck on your experiments!!! hope I contributed a little bit in the field of science... 
  
Shuai Zhang & Marvin Zhang @ 2019-Jun-6
