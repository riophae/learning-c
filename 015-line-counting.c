#include <stdio.h>

int main()
{
  double nl = 0;
  int c;

  printf("Please input any and press ctrl + d to count.\n");

  for (; (c = getchar()) != EOF; )
    if (c == '\n')
      ++nl;

  printf("Number of lines: %.0f\n", nl);
}
