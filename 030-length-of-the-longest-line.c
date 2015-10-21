#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0;
  int max_length = -1;
  char c;

  printf("Input some lines of sentence and the lenght of the longest line will be printed.\n");

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      if (i > max_length) {
        max_length = i;
      }
      i = 0;
    } else {
      i += 1;
    }
  }

  printf("Length of the longest line is: %d\n", max_length);

  return EXIT_SUCCESS;
}
