#include <stdio.h>

#define IN 0
#define OUT 1

int main()
{
  int c, state = OUT;

  printf("Please input any characters.\n");

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c != '\n') {
      state = IN;
      putchar(c);
    } else if (state == IN){
      state = OUT;
      putchar('\n');
    }
  }
}
