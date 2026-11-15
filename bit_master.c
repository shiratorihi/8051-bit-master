#include <mcs51/stc89.h>

void main(void) {
  P0 = 0xFE;
  P0 <<= P0;
  __asm__("nop");
}
