#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
  char c;
  int line = 0;
  int at_beginning = TRUE;

  while ((c = getchar()) != EOF) {
    if (at_beginning) {
      at_beginning = FALSE;
      printf("%d ", line);
      line += 1;
    }

    putchar(c);

    if (c == '\n') {
      at_beginning = TRUE;
    }
  }

  return EXIT_SUCCESS;
}
