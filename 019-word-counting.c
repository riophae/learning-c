#include <stdio.h>

#define IN 0
#define OUT 1

int main()
{
  float nc = 0, nl = 0, nw = 0;
  int c, state = OUT;

  while ((c = getchar()) != EOF) {
    nc += 1;

    if (c == '\n')
      nl += 1;

    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      nw += 1;
    }
  }

  printf("Characters: %.0f\t Lines: %.0f\t Words: %.0f", nc, nl, nw);
}
