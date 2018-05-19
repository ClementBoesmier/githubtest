#include <Arduino.h>
#include <RGBmatrixPanel.h>
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>



#define OE 9
#define LAT 10
#define CLK 11
#define A A0
#define B A1
#define C A2
#define D A3


RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false, 64);

void setup() {
    matrix.begin();
}

void loop() {
    matrix.setTextSize(2);
    matrix.setTextWrap(false);
    matrix.setCursor(0, 0);
    matrix.setTextColor(matrix.Color333(0,0,7));
    matrix.print("LAB");
    matrix.setCursor(0, 16);
    matrix.setTextColor(matrix.Color333(7,0,0));
    matrix.print("Ouest");
}
