#ifndef __BITMAPS__
#define __BITMAPS__

// --------------------------------------------------------------------------------------
// Horizontal

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

// --------------------------------------------------------------------------------------
// Vertical

#define vertical_width 3
#define vertical_height 11
static unsigned char vertical_bits[] = {
   0x02, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02 };

void drawVertical(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, vertical_width, vertical_height, vertical_bits);
}

#define vertical_slanted_width 4
#define vertical_slanted_height 11
static unsigned char vertical_slanted_bits[] = {
   0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02 }; 

void drawVerticalSl(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, vertical_slanted_width, vertical_slanted_height, vertical_slanted_bits);
}

#define vertical_mid_width 3
#define vertical_mid_height 9
static unsigned char vertical_mid_bits[] = {
   0x02, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02 };

void drawVerticalMid(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, vertical_mid_width, vertical_mid_height, vertical_mid_bits);
}

// TODO: VerticalMidSlanted

// --------------------------------------------------------------------------------------
// Diagonal

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

#define diagonal_slanted_top_width 4
#define diagonal_slanted_top_height 9
static unsigned char diagonal_slanted_top_bits[] = {
   0x01, 0x03, 0x06, 0x06, 0x06, 0x06, 0x0c, 0x0c, 0x08 }; 

void drawDiagonalTopSl(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, diagonal_slanted_top_width, diagonal_slanted_top_height, diagonal_slanted_top_bits);
}

#define diagonal_slanted_bottom_width 4
#define diagonal_slanted_bottom_height 9
static unsigned char diagonal_slanted_bottom_bits[] = {
   0x01, 0x03, 0x03, 0x03, 0x06, 0x06, 0x06, 0x0c, 0x08 }; 

void drawDiagonalBottomSl(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, diagonal_slanted_bottom_width, diagonal_slanted_bottom_height, diagonal_slanted_bottom_bits);
}

// --------------------------------------------------------------------------------------
// Round

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

#define round_slanted_top_width 8
#define round_slanted_top_height 9
static unsigned char round_slanted_top_bits[] = {
   0x03, 0x1e, 0x3c, 0x60, 0x60, 0x60, 0x40, 0xc0, 0x80 }; 

void drawRoundTopSl(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, round_slanted_top_width, round_slanted_top_height, round_slanted_top_bits);
}

#define round_slanted_bottom_width 10
#define round_slanted_bottom_height 9
static unsigned char round_slanted_bottom_bits[] = {
   0x00, 0x02, 0x00, 0x03, 0x00, 0x01, 0x80, 0x01, 0xc0, 0x00, 0x60, 0x00,
   0x3c, 0x00, 0x1e, 0x00, 0x03, 0x00 }; 

void drawRoundBottoml(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, round_slanted_bottom_width, round_slanted_bottom_height, round_slanted_bottom_bits);
}

// --------------------------------------------------------------------------------------
// Specials

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

#define comma_width 6
#define comma_height 8
static unsigned char comma_bits[] = {
   0x38, 0x38, 0x1c, 0x1c, 0x0e, 0x0e, 0x0f, 0x07 };

void drawComma(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, comma_width, comma_height, comma_bits);
}

#define alert_width 40
#define alert_height 10
static unsigned char alert_bits[] = {
   0x10, 0x04, 0x7e, 0x3e, 0xfe, 0x10, 0x04, 0x02, 0x42, 0x10, 0x28, 0x04,
   0x02, 0x42, 0x10, 0x28, 0x04, 0x02, 0x42, 0x10, 0x44, 0x04, 0x3e, 0x42,
   0x10, 0x44, 0x04, 0x02, 0x3e, 0x10, 0xfe, 0x04, 0x02, 0x22, 0x10, 0x82,
   0x04, 0x02, 0x42, 0x10, 0x01, 0x05, 0x02, 0x42, 0x10, 0x01, 0xfd, 0x7e,
   0x82, 0x10 };

void drawAlert(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, alert_width, alert_height, alert_bits);
}

#define fpm_width 26
#define fpm_height 10
static unsigned char fpm_bits[] = {
   0x9f, 0x8f, 0x01, 0x03, 0x81, 0x90, 0x01, 0x03, 0x81, 0x90, 0x82, 0x02,
   0x81, 0x90, 0x82, 0x02, 0x9f, 0x90, 0x44, 0x02, 0x81, 0x8f, 0x44, 0x02,
   0x81, 0x80, 0x28, 0x02, 0x81, 0x80, 0x28, 0x02, 0x81, 0x80, 0x10, 0x02,
   0x81, 0x80, 0x10, 0x02 };

void drawFpm(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, fpm_width, fpm_height, fpm_bits);
}

#define ft_width 13
#define ft_height 10
static unsigned char ft_bits[] = {
   0xdf, 0x1f, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x1f, 0x02, 0x01, 0x02,
   0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02 };

void drawFt(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, ft_width, ft_height, ft_bits);
}

#define hpa_width 25
#define hpa_height 10
static unsigned char hpa_bits[] = {
   0x81, 0x7c, 0x10, 0x00, 0x81, 0x84, 0x10, 0x00, 0x81, 0x84, 0x28, 0x00,
   0x81, 0x84, 0x28, 0x00, 0xff, 0x84, 0x44, 0x00, 0x81, 0x7c, 0x44, 0x00,
   0x81, 0x04, 0xfe, 0x00, 0x81, 0x04, 0x82, 0x00, 0x81, 0x04, 0x01, 0x01,
   0x81, 0x04, 0x01, 0x01 };

void drawHpa(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, hpa_width, hpa_height, hpa_bits);
}

#define inhg_width 38
#define inhg_height 10
static unsigned char inhg_bits[] = {
   0x31, 0x08, 0x10, 0x08, 0x1f, 0x51, 0x08, 0x10, 0x88, 0x20, 0x51, 0x08,
   0x10, 0x48, 0x00, 0x91, 0x08, 0x10, 0x48, 0x00, 0x91, 0x08, 0xf0, 0x4f,
   0x00, 0x11, 0x09, 0x10, 0x48, 0x3c, 0x11, 0x09, 0x10, 0x48, 0x20, 0x11,
   0x0a, 0x10, 0x48, 0x20, 0x11, 0x0a, 0x10, 0x88, 0x20, 0x11, 0x0c, 0x10,
   0x08, 0x1f };

void drawInHg(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  u8g2.drawXBM(x, y, inhg_width, inhg_height, inhg_bits);
}

// Needed Letters:
// ADEGHLNOPRSTV
void drawA_full(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontal(u8g2, x+2, y+12);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
}

void drawA_half(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontalHalf(u8g2, x+2, y+12);
  drawHorizontalHalf(u8g2, x+7, y+12);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
}

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

void drawL(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y+24);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
}

void drawN(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
  drawDiagonalTop(u8g2, x+3, y+3);
  drawDiagonalBottom(u8g2, x+3, y+15);
}

void drawO(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontal(u8g2, x+2, y+24);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
}

void drawR(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+2, y);
  drawHorizontal(u8g2, x+2, y+12);
  drawVertical(u8g2, x, y+2);
  drawVertical(u8g2, x, y+14);
  drawVertical(u8g2, x+12, y+2);
  drawDiagonalBottom(u8g2, x+3, y+15);
}

void drawV(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
  drawDiagonalTop(u8g2, x+3, y+3);
  drawDiagonalBottom(u8g2, x+3, y+15);
}

void draw8(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawE(u8g2, x, y);
  drawVertical(u8g2, x+12, y+2);
  drawVertical(u8g2, x+12, y+14);
}

// Words

#define SYMBOL_SPACING 25

void drawHDG(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawH_full(u8g2, x, y);
  drawD_full(u8g2, x+SYMBOL_SPACING, y);
  drawG_half(u8g2, x+SYMBOL_SPACING+SYMBOL_SPACING, y);
}

void drawROL(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawR(u8g2, x, y);
  drawO(u8g2, x+SYMBOL_SPACING, y);
  drawL(u8g2, x+SYMBOL_SPACING+SYMBOL_SPACING, y);
}

void drawNAV_left_top(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawN(u8g2, x, y);
  drawA_full(u8g2, x+SYMBOL_SPACING, y);
  drawV(u8g2, x+SYMBOL_SPACING*2, y);
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

void drawDummy1Sl(U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2, int x, int y) {
  drawHorizontal(u8g2, x+4, y+0);
  drawHorizontal(u8g2, x+3, y+12);
  drawHorizontal(u8g2, x+2, y+24);
  
  drawVerticalSl(u8g2, x+1, y+2);
  drawVerticalSl(u8g2, x+0, y+14);
  drawVerticalSl(u8g2, x+13, y+2);
  drawVerticalSl(u8g2, x+12, y+14);
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