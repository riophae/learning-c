#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void test(int);

int main(void) {
  test(TRUE);
  test(FALSE);
  test(FALSE);
  test(FALSE);
  test(FALSE);
  test(FALSE);

  return EXIT_SUCCESS;
}

void test(int bool) {
  static int a;

  if (bool == TRUE) {
    a = 1;
  } else {
    a += 1;
  }

  printf("%d\n", a);
}
