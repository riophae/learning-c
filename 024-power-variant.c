#include <stdio.h>

int power(int base, int n)
{
  int result = 1;

  for (; n > 0; n--) {
    result = result * base;
  }

  return result;
}

int main()
{
  int n;

  for (n = 0; n <= 10; n++) {
    printf("n = %d 2^n = %d (-3)^n = %d\n", n, power(2, n), power(-3, n));
  }
}
