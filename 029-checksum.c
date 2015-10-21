#include <stdio.h>
#include <stdlib.h>

int main(void) {
  signed char checksum = -1;
  char c;

  printf("Input any characters then press ENTER to calculate checksum: \n");

  c = getchar();
  printf("Original input: ");

  while (c != '\n') {
    checksum += c;
    putchar(c);
    c = getchar();
  }
  putchar('\n');

  printf("checksum: %d\n", checksum);

  return EXIT_SUCCESS;
}
