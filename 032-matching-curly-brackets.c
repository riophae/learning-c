#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c;
  int count = 0;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '{':
        count += 1;
        break;

      case '}':
        count -= 1;
        break;
    }

    if (count < 0) {
      puts("Curly brackets not matched");
      exit(EXIT_FAILURE);
    }
  }

  if (count == 0) {
    puts("Curly brackets matched");
  } else {
    puts("Curly brackets not matched");
    exit(EXIT_FAILURE);
  }

  return EXIT_SUCCESS;
}
