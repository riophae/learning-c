#include <stdio.h>
#include <stdlib.h>

void deblank(char string[]);

int
main(void) {
  char str_with_blanks[] = "12 3  456 789   0  ";
  deblank(str_with_blanks);
  printf("%s\n", str_with_blanks);
  return EXIT_SUCCESS;
}

void
deblank(char string[]) {
  int i = 0, j = 0;
  while (string[i] != 0) {
    if (string[i] != ' ') {
      string[j] = string[i];
      j += 1;
    }
    i += 1;
  }
  string[j] = 0;
}
