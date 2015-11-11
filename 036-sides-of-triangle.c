#include <stdio.h>
#include <stdlib.h>

int
main(void) {
  int a, b, c;
  printf("Please input three sides of a triangle:\n");
  scanf("%d %d %d", &a, &b, &c);

  if (a <= 0 || b <= 0 || c <= 0) {
    printf("Length should be greater than zero.\n");
    return EXIT_FAILURE;
  }

  if (
    a + b < c ||
    b + c < a ||
    a + c < b
  ) {
    printf("Sum of any two side should be greater than the other.\n");
    return EXIT_FAILURE;
  }

  if (
    a == b ||
    a == c ||
    b == c
  ) {
    if (a == b && b == c) {
      printf("It's a equilateral triangle!\n");
    } else {
      printf("It's a isoceles triangle!\n");
    }
  } else {
    printf("It's a scalene triangle!\n");
  }

  if (
    a*a + b*b == c*c ||
    a*a + c*c == b*b ||
    b*b + c*c == a*a
  ) {
    printf("It's a right-angled triangle!\n");
  }

  return EXIT_SUCCESS;
}
