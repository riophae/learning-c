#include <stdio.h>

int main()
{
  double ns = 0, nt = 0, nl = 0;
  int c;

  printf("Please input any and press ctrl + d to count.\n");

  while ((c = getchar()) != EOF) {
    switch (c) {
      case ' ':
        ++ns;
        break;

      case '\t':
        ++nt;
        break;

      case '\n':
        ++nl;
        break;
    }
  }

  printf("Number of spaces: %.0f\n", ns);
  printf("Number of tabs: %.0f\n", nt);
  printf("Number of lines: %.0f\n", nl);
}
