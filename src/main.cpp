#include <Arduino.h>

// // put function declarations here:
// int myFunction(int, int);

// void setup() {
//   // put your setup code here, to run once:
//   int result = myFunction(2, 3);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }


  
  // #include <Arduino.h>  // needed in PlatformIO
  
  // void setup() {
  // }
  
  // void loop() {
  //   Serial.println("Hello XIAO!");
  //   delay(2000);
  // }

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
 
Adafruit_SSD1306 display;
 
void setup(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
 
  display.drawLine(0, 16, 128, 16, WHITE);

  // Show "Hello world!" on the display.
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Hello world!");
  display.display();
}
 
void loop(){
  Serial.println("Hello XIAO!");
  delay(2000);
}



