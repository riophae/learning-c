#include <stdio.h>
#include <stdlib.h>

int main(void) {
  signed char checksum = -1;
  char c;

  printf("Input any characters then press ENTER to calculate checksum: \n");

  while ((c = getchar()) != EOF) {
    checksum += c;
    putchar(c);
    if (c == '\n') break;
  }

  printf("checksum: %d\n", checksum);

  return EXIT_SUCCESS;
}
