#include <STC89C5xRC.H>

void delay(void)
{
	unsigned char data i, j;
	i = 255;
	do {
    j = 255;
    do {
    } while(--j);
  } while (--i);
}

void main() {
  P0 = 0;
  while(1) {
    P0 += 1;
    delay();
  }
}