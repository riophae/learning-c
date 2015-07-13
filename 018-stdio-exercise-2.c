#include <stdio.h>

int main()
{
  int c;

  printf("Please input any characters as you like and then hit Enter.\n");
  printf("Escape sequences will be replaced with visible characters.\n");

  while ((c = getchar()) != EOF) {
    switch (c) {
      case '\t':
        printf("\\t");
        break;

      case '\b':
        printf("\\b");
        break;

      case '\\':
        printf("\\");
        break;

      default:
        putchar(c);
    }
  }
}
