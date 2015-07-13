#include <stdio.h>

int main()
{
  double count = 0;
  int cur;

  printf("Please input any and press ctrl + d to count.\n");

  for (; getchar() != EOF; ++count)
    ;

  printf("Character count: %.0f\n", count);
}
