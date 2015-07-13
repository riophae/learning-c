#include <stdio.h>

int main()
{
  int c, last;
  int space = ' ';

  printf("Please input any characters as you like and then hit Enter.\n");
  printf("Sequential spaces will be replaced with one only.\n");

  while ((c = getchar()) != EOF) {
    if (last != space) {
      putchar(c);
    }

    last = c;
  }
}
