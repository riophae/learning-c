#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float number;
  printf("Enter a number:\n");
  scanf("%f", &number);

  if (number < 0) {
    printf("Cannot compute the square root of a negative number!\n");
    return EXIT_FAILURE;
  }

  float last_guess, new_guess = 1;
  int i = 0;
  do {
    last_guess = new_guess;
    new_guess = (last_guess + number / last_guess) / 2;
    printf("%.15e\n", new_guess);
  } while (last_guess != new_guess);

  printf("Sqaure root of %f is: %.15e\n", number, new_guess);
  return EXIT_SUCCESS;
}
