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
    oleds[i]->setContrast(1);
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

void drawDummyLeft(U8G2_SSD1306_128X64_NONAME_F_HW_I2C display, int i = 0) {
  display.clearBuffer();

  switch (i % 6) {
    case 0:
      drawDummy1(display, 12, 1);
      drawDummy2(display, 37, 1);
      drawDummy3(display, 62, 1);
      break;
    case 1:
      drawHDG(display, 12, 1);
      break;
    case 2:
      drawROL(display, 12, 1);
      break;
    case 3:
      drawNAV_left_top(display, 12, 1);
      break;
    case 4:
      drawAPR_left_top(display, 12, 1);
      break;
    case 5:
      drawREV_left_top(display, 12, 1);
      break;
  }
  // drawDummy1(display, 12, 1);
  // drawDummy1Sl(display, 12, 1);
  // drawH_full(display, 16, 1);
  // drawDummy2(display, 37, 1);
  // drawD_full(display, 40, 1);
  // drawDummy3(display, 62, 1);
  // drawG_half(display, 64, 1);

  // drawHDG(display, 12, 1);
  // drawROL(display, 12, 1);
  // drawNAV_left_top(display, 12, 1);
  // drawAPR_left_top(display, 12, 1);

  // Bottom
  switch (i % 5) {
    case 0:
      drawDummy1(display, 12, 35);
      drawDummy4(display, 37, 35); // geteilte Mittellinie!
      drawDummy1(display, 62, 35);
      break;
    case 1:
      drawNAV_left_bottom(display, 12, 35);
      break;
    case 2:
      drawAPR_left_bottom(display, 12, 35);
      break;
    case 3:
      drawGS(display, 12, 35);
      break;
    case 4:
      drawREV_left_bottom(display, 12, 35);
      break;
  }
  // drawDummy1(display, 12, 35);
  // drawDummy4(display, 37, 35); // geteilte Mittellinie!
  // drawDummy1(display, 62, 35);
  // drawGS(display, 12, 35);

  if ((i / 2) % 2 == 0) {
    drawARM(display, 86, 25);
    drawAP(display, 101, 0);
  }

  display.sendBuffer();
}

void drawDummyMid(U8G2_SSD1306_128X64_NONAME_F_HW_I2C display, int i = 0) {
  display.clearBuffer();

  // Top
  switch (i % 4) {
    case 0: 
      draw8(display, 7, 1);
      drawDummy3(display, 32, 1);
      drawDummy5(display, 57, 1);
      break;
    case 1:
      drawALT_mid(display, 7, 1);
      break;
    case 2:
      drawVS(display, 7, 1);
      break;
    case 3:
      drawGS(display, 7, 1);
      break;
  }

  // Bottom
  switch ((i/2) % 2) {
    case 0:
      drawDummy5(display, 7, 35);
      drawDummy4(display, 32, 35);
      drawDummy5(display, 57, 35);
      break;
    case 1:
      drawALT_mid(display, 7, 35);
      drawARM(display, 89, 25);
      break;
  }

  // side
  drawArrowUp(display, 114, 4);
  drawPT(display, 117, 21);
  drawArrowDown(display, 114, 48);

  display.sendBuffer();
}

void drawDummyRight(U8G2_SSD1306_128X64_NONAME_F_HW_I2C display, int i = 0) {
  display.clearBuffer();

  if (1 == 0) {
    // 8 digits do not look good.
    draw8(display, 1, 1);
    draw8(display, 21, 1);
    draw8(display, 41, 1);
    drawComma(display, 56, 22);
    draw8(display, 66, 1);
    draw8(display, 86, 1);
    draw8(display, 106, 1);

    drawAlert(display, 1, 36);
    drawFpm(display, 52, 36);
    drawFt(display, 86, 36);

    drawHpa(display, 16, 51);
    drawInHg(display, 63, 51);
  } else {
    if (i % 2 == 0) {
      draw4(display, 1, 1);
      draw3(display, 21, 1);
      drawComma(display, 36, 22);
      draw2(display, 46, 1);
      draw1(display, 66, 1);
      draw0(display, 86, 1);
    } else {
      draw5(display, 1, 1);
      draw6(display, 21, 1);
      drawComma(display, 36, 22);
      draw7(display, 46, 1);
      draw8(display, 66, 1);
      draw9(display, 86, 1);
    }

    switch(i % 6) {
      case 0:
        break;
      case 1:
        drawAlert(display, 1, 36);
        break;
      case 2:
        drawFpm(display, 52, 36);
        break;
      case 3:
        drawFt(display, 86, 36);
        break;
      case 4:
        drawHpa(display, 16, 51);
        break;
      case 5:
        drawInHg(display, 63, 51);
        break;
    }

  }

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
    drawE_full(oled_mid, 100, 35);
  }

  display.sendBuffer();
}

int i = 0;

void loop(void) {
  TCA9548A(0); // left Display
  drawDummyLeft(oled_left, i);
  // drawFScreenBuffer(oled_left);

  TCA9548A(1);
  drawDummyMid(oled_mid, i);
  // drawFScreenBuffer(oled_mid, 1);

  TCA9548A(2);
  drawDummyRight(oled_right, i);
  // drawFScreenBuffer(oled_right);

  Serial.print(i++); Serial.print(" ");
  if (i % 10 == 0) {
    i = 0;
    Serial.print("\n");
  }

  delay(1000);
}

// the loop function runs over and over again forever
// void loop() {
//   digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
//   delay(1000);                      // wait for a second
//   digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
//   delay(1000);                      // wait for a second
// }
