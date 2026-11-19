#include "STC89C5xRC.h"

void main(void) {
  P0 = 0xFE;
  P0 <<= P0;
  __asm__("nop");
}
