#include <stdio.h>

int main()
{
  int c, d;

  while ((d = (c = getchar() != EOF)))
    printf("%d %d\n", c, d);

  printf("%d %d\n", c, d);
}
