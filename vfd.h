#include <stdint.h>
// teensy 3.6
// SS and CMD/DATA are controlled by HW SPI CS
#define PIN_VFD_SS 10
#define PIN_VFD_CMD_DATA 6
#define PIN_VFD_RST 14
#define PIN_VFD_FRP 38

#define USE_HW_CS 1
#define USE_SPI_DMA 1

#define DUMPVAL(x) do{ Serial.print(#x); Serial.print(": "); Serial.println(x, HEX); }while(0);

void vfdSend(uint8_t value, bool isCommand);
void vfdSetGram(bool isGram1);
void vfdInit();
void vfdSetCursor(int x, int y);
void vfdSetAutoInc(bool dx, bool dy);
// each byte in the fb is a 1x8 column of pixels. the fb is organized in rows of these columns of pixels.
void vfdWriteFb(uint8_t *fb, bool isGram1);
