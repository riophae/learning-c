#include <stdio.h>

int main() {
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 200;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celcius = (5.0/9.0) * (fahr-32);
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }
}