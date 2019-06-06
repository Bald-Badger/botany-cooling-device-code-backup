# botany-cooling-device-code-backup
this is the code back up (as well as instructions) of the cooling device I've been working on for Dr. Barker
step 1, install arduino software (windows 10 only) 
  1. go to Microsoft Store (should be in your computer)
  2. search for Arduino
  3. download it
  
step 2, get to know about Arduino (recommended)
  some useful links:
  1. https://www.youtube.com/watch?v=nL34zDTPkcs
  2. https://www.arduino.cc/en/Guide/HomePage
  
step 3, add your code 
  1. download the "SimpleDHT" floder, place it in your arduino library floder
     the path should looks like something like this: C:\Users\GeniusBadger\Documents\Arduino\libraries
  2. download the "Ver3" folder, put it to anywhere you want
  
step 4, use the code
  1. go into the Ver3 folder you just downloaded, go into there, doulbe click on the Ver3.ino, arduino software should pop out
  2. change the 'target_temp' variable to the value you like
  3. find out whick port of your computer is the arduino is using
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
  7. upload the code by clicking the right arrow on the left upper corner of the arduino software
  8. the code should upload successfully, email me if there any problem, Dr. Barker have my email
  9. power up and do experiments!!
  
step 5
  if you want to monitor temprearure, after step 4-78, open tools-serial monitor, and choose port rate of 57600
  one or 2 error message should appear on the serial monitor once you open it, as well as powering it on. this is normal due to voltage   inrush 
