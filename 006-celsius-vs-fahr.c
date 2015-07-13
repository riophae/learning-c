#include <stdio.h>

int main()
{
  float celsius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 10;

  celsius = lower;

  printf("  C      F\n");

  while (celsius <= upper) {
    fahr = (celsius*9.0/5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
