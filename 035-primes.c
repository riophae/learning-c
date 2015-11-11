#include <stdio.h>
#include <stdlib.h>

int main(void) {
  const int max = 100;

  for (int i = 2; i <= max; i++) {
    for (int j = 2; j <= i - 1; j++) {
      if (i % j == 0) {
        goto exit;
      }
    }
    printf("%d\n", i);
    exit: ;
  }

  return EXIT_SUCCESS;
}
