#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  printf("Input n and then calculate the square root of it:\n");
  scanf("%d", &n);

  float r0, r1 = 1.0;
  do {
    r0 = r1;
    r1 = (n / r0 + r0) / 2;
  } while (r1 != r0);

  printf("Sqaure root of %d is: %f\n", n, r1);
  return EXIT_SUCCESS;
}
