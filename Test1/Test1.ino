// #include <MUIU8g2.h>
#include <U8g2lib.h>
#include <Wire.h>
#include "Bitmaps.h"
// #include <U8x8lib.h>

#define TCAADDR 0x70

// U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); // Für 1,3" mit I2C
U8G2_SSD1306_128X64_NONAME_F_HW_I2C oled_left(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); // Für 0,96" I2C, Full screen buffer (schnell, viel Speicherbedarf)
U8G2_SSD1306_128X64_NONAME_F_HW_I2C oled_mid(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); // Für 0,96" I2C, Full screen buffer (schnell, viel Speicherbedarf)
U8G2_SSD1306_128X64_NONAME_F_HW_I2C oled_right(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); // Für 0,96" I2C, Full screen buffer (schnell, viel Speicherbedarf)
U8G2_SSD1306_128X64_NONAME_F_HW_I2C* oleds[3] = {&oled_left, &oled_mid, &oled_right};
// U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); // Für 0,96" I2C, Page buffer mode (langsam, wenig Speicherbedarf)

void TCA9548A(uint8_t bus) {
  Wire.beginTransmission(TCAADDR);
  Wire.write(1 << bus);
  Wire.endTransmission();
}

void setup(void) {
  Wire.begin();
  Serial.begin(9600);

  for (int i = 0; i < 3; i++) {
    TCA9548A(i);
    oleds[i]->begin();
    oleds[i]->setContrast(32);
    oleds[i]->setDrawColor(1);
    oleds[i]->setBitmapMode(1);
  }
}

void drawPBuffer(void) {
  // NOT USED!!! use drawFScreenBuffer
  oled_left.setDrawColor(1);
  oled_left.firstPage();
  do {
    oled_left.drawRFrame(0, 0, 127, 63, 5);
  } while (oled_left.nextPage());
}

// Left
//   diagonal - round         - diagonal/half
//   diagonal - half          - diagonal
// Mid
//   base     - diagonal/half - vert
//   vert     - half          - vert
// Right
//   base - base - comma - base - base - base
//   alert - fpm - ft
//     hpa -  in - hg

void drawDummyLeft(U8G2_SSD1306_128X64_NONAME_F_HW_I2C display) {
  display.clearBuffer();

  drawDummy1(display, 16, 1);
  // drawH_full(display, 16, 1);
  drawDummy2(display, 40, 1);
  // drawD_full(display, 40, 1);
  drawDummy3(display, 64, 1);
  // drawG_half(display, 64, 1);

  drawDummy1(display, 16, 35);
  drawDummy4(display, 40, 35); // geteilte Mittellinie!
  drawDummy1(display, 64, 35);

  drawARM(display, 86, 25);
  drawAP(display, 99, 0);

  display.sendBuffer();
}

void drawDummyMid(U8G2_SSD1306_128X64_NONAME_F_HW_I2C display) {
  display.clearBuffer();

  draw8(display, 16, 1);
  drawDummy3(display, 40, 1);
  drawDummy5(display, 64, 1);

  drawDummy5(display, 16, 35);
  drawDummy4(display, 40, 35);
  drawDummy5(display, 64, 35);

  drawARM(display, 86, 25);
  // drawAP(display, 99, 0);

  drawArrowUp(display, 104, 4);
  drawPT(display, 107, 21);
  drawArrowDown(display, 104, 48);

  display.sendBuffer();
}


void drawFScreenBuffer(U8G2_SSD1306_128X64_NONAME_F_HW_I2C display, int pos = -1) {
  display.setDrawColor(1);
  display.clearBuffer();
  // display.drawFrame(40, 30, 40, 24);
  // display.drawFrame(0, 0, 127, 64); // Full screen
  // display.drawRFrame(0, 0, 127, 64, 5); // Full screen
  display.setBitmapMode(1);

  draw8(display, 16, 1);
  draw8(display, 16, 35);

  draw8(display, 40, 1);
  draw8(display, 40, 35);

  draw8(display, 64, 1);
  draw8(display, 64, 35);

  drawARM(display, 86, 25);
  drawAP(display, 99, 0);

  if (pos == 1) {
    drawE(oled_mid, 100, 35);
  }

  display.sendBuffer();
}

void loop(void) {
  TCA9548A(0); // left Display
  drawDummyLeft(oled_left);
  // drawFScreenBuffer(oled_left);

  TCA9548A(1);
  drawDummyMid(oled_mid);
  // drawFScreenBuffer(oled_mid, 1);

  TCA9548A(2);
  drawFScreenBuffer(oled_right);

  delay(100);
}

// the loop function runs over and over again forever
// void loop() {
//   digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
//   delay(1000);                      // wait for a second
//   digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
//   delay(1000);                      // wait for a second
// }
