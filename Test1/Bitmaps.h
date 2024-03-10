#ifndef __BITMAPS__
#define __BITMAPS__

#define horizontal_width 11
#define horizontal_height 3
static unsigned char horizontal_bits[] = {
   0xfe, 0x03, 0xff, 0x07, 0xfe, 0x03 };

void drawHorizontal(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, horizontal_width, horizontal_height, horizontal_bits);
}

#define horizontal_half_width 6
#define horizontal_half_height 3
static unsigned char horizontal_half_bits[] = {
   0x1e, 0x3f, 0x1e };

void drawHorizontalHalf(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, horizontal_half_width, horizontal_half_height, horizontal_half_bits);
}

#define vertical_width 3
#define vertical_height 11
static unsigned char vertical_bits[] = {
   0x02, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02 };

void drawVertical(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, vertical_width, vertical_height, vertical_bits);
}

#define vertical_mid_width 3
#define vertical_mid_height 9
static unsigned char vertical_mid_bits[] = {
   0x02, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02 };

void drawVerticalMid(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, vertical_mid_width, vertical_mid_height, vertical_mid_bits);
}

#define diagonal_top_width 9
#define diagonal_top_height 9
static unsigned char diagonal_top_bits[] = {
   0x01, 0x00, 0x03, 0x00, 0x06, 0x00, 0x06, 0x00, 0x0c, 0x00, 0x0c, 0x00,
   0x18, 0x00, 0x18, 0x00, 0x10, 0x00 };

void drawDiagonalTop(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, diagonal_top_width, diagonal_top_height, diagonal_top_bits);
}

#define diagonal_bottom_width 9
#define diagonal_bottom_height 9
static unsigned char diagonal_bottom_bits[] = {
   0x10, 0x00, 0x30, 0x00, 0x30, 0x00, 0x60, 0x00, 0x60, 0x00, 0xc0, 0x00,
   0xc0, 0x00, 0x80, 0x01, 0x00, 0x01 };

void drawDiagonalBottom(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, diagonal_bottom_width, diagonal_bottom_height, diagonal_bottom_bits);
}

#define round_top_width 9
#define round_top_height 9
static unsigned char round_top_bits[] = {
   0x03, 0x00, 0x1e, 0x00, 0x3c, 0x00, 0x60, 0x00, 0xc0, 0x00, 0xc0, 0x00,
   0x80, 0x00, 0x80, 0x01, 0x00, 0x01 };

void drawRoundTop(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, round_top_width, round_top_height, round_top_bits);
}

#define round_bottom_width 9
#define round_bottom_height 9
static unsigned char round_bottom_bits[] = {
   0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0x60, 0x00,
   0x3c, 0x00, 0x1e, 0x00, 0x03, 0x00 };

void drawRoundBottom(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, round_bottom_width, round_bottom_height, round_bottom_bits);
}


#define arm_width 10
#define arm_height 38
static unsigned char arm_bits[] = {
   0x30, 0x00, 0x78, 0x00, 0x78, 0x00, 0xcc, 0x00, 0xcc, 0x00, 0xcc, 0x00,
   0xfe, 0x01, 0xfe, 0x01, 0x86, 0x01, 0x87, 0x03, 0x03, 0x03, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0xfc, 0x01, 0x8c, 0x01, 0x8c, 0x01,
   0x8c, 0x01, 0xfc, 0x00, 0x7c, 0x00, 0xcc, 0x00, 0xcc, 0x01, 0x8c, 0x01,
   0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x87, 0x03, 0x87, 0x03, 0xcf, 0x03,
   0x4f, 0x03, 0x4b, 0x03, 0x7b, 0x03, 0x7b, 0x03, 0x33, 0x03, 0x03, 0x03,
   0x03, 0x03, 0x03, 0x03 };

void drawARM(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, arm_width, arm_height, arm_bits);
}

#define ap_width 26
#define ap_height 19
static unsigned char ap_bits[] = {
   0xfc, 0xff, 0xff, 0x00, 0xfe, 0xff, 0xff, 0x01, 0x03, 0x00, 0x00, 0x03,
   0x03, 0x00, 0x00, 0x03, 0x03, 0x83, 0x1f, 0x03, 0x83, 0x87, 0x3f, 0x03,
   0x83, 0x87, 0x31, 0x03, 0xc3, 0x8c, 0x31, 0x03, 0xc3, 0x8c, 0x31, 0x03,
   0xc3, 0x8c, 0x3f, 0x03, 0xe3, 0x9f, 0x1f, 0x03, 0xe3, 0x9f, 0x01, 0x03,
   0x63, 0x98, 0x01, 0x03, 0x73, 0xb8, 0x01, 0x03, 0x33, 0xb0, 0x01, 0x03,
   0x03, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xff, 0x01,
   0xfc, 0xff, 0xff, 0x00 };

void drawAP(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, ap_width, ap_height, ap_bits);
}

#define arrow_up_width 13
#define arrow_up_height 13
static unsigned char arrow_up_bits[] = {
   0x40, 0x00, 0x40, 0x00, 0xe0, 0x00, 0xe0, 0x00, 0xf0, 0x01, 0xf0, 0x01,
   0xf8, 0x03, 0xf8, 0x03, 0xfc, 0x07, 0xfc, 0x07, 0xfe, 0x0f, 0xfe, 0x0f,
   0xff, 0x1f };

void drawArrowUp(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, arrow_up_width, arrow_up_height, arrow_up_bits);
}

#define arrow_down_width 13
#define arrow_down_height 13
static unsigned char arrow_down_bits[] = {
   0xff, 0x1f, 0xfe, 0x0f, 0xfe, 0x0f, 0xfc, 0x07, 0xfc, 0x07, 0xf8, 0x03,
   0xf8, 0x03, 0xf0, 0x01, 0xf0, 0x01, 0xe0, 0x00, 0xe0, 0x00, 0x40, 0x00,
   0x40, 0x00 };

void drawArrowDown(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, arrow_down_width, arrow_down_height, arrow_down_bits);
}

#define pt_width 7
#define pt_height 23
static unsigned char pt_bits[] = {
   0x3e, 0x42, 0x42, 0x42, 0x42, 0x3e, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00,
   0x00, 0x7f, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08 };

void drawPT(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, pt_width, pt_height, pt_bits);
}

// Needed Letters:
// ADEGHLNOPRSTV

void drawD_full(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawRoundTop(u8g2, x+3, y+3);
  drawRoundBottom(u8g2, x+3, y+15);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
}

void drawG_half(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontal(u8g2, x+2, y+24);
  drawHorizontalHalf(u8g2, x+7, y+12);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+14);
}

void drawH_full(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y+12);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
}

void drawE(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontal(u8g2, x+2, y+12);
  drawHorizontal(u8g2, x+2, y+24);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
}

void draw8(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawE(u8g2, x, y);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
}

// Dummies
// Dummy1 - 8 with diagonals
// Dummy2 - 8 with rounds for "D"
// Dummy3 - 8 with split mid and diagonals
// Dummy4 - 8 with split mid
// Dummy5 - 8 with vertical mid

void drawDummy1(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  draw8(u8g2, x, y);
  drawDiagonalTop(u8g2, x+3, y+3);
  drawDiagonalBottom(u8g2, x+3, y+15);
}

void drawDummy2(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  draw8(u8g2, x, y);
  drawRoundTop(u8g2, x+3, y+3);
  drawRoundBottom(u8g2, x+3, y+15);
}

void drawDummy3(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontalHalf(u8g2, x+2, y+12);
  drawHorizontalHalf(u8g2, x+7, y+12);
  drawHorizontal(u8g2, x+2, y+24);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
  drawDiagonalTop(u8g2, x+3, y+3);
  drawDiagonalBottom(u8g2, x+3, y+15);
}

void drawDummy4(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontalHalf(u8g2, x+2, y+12);
  drawHorizontalHalf(u8g2, x+7, y+12);
  drawHorizontal(u8g2, x+2, y+24);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
}

void drawDummy5(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  draw8(u8g2, x, y);
  drawVerticalMid(u8g2, x+6, y+3);
  drawVerticalMid(u8g2, x+6, y+15);
}

#endif