#include <stdio.h>

#define DEBUG 0

#define MAX_WORD_LENGTH 20
#define IN_WORD 0
#define OUT_WORD 1

int main()
{
  int nwordlen[MAX_WORD_LENGTH];
  int i, j;
  int c, s = OUT_WORD, w = 0;

  for (i = 1; i <= MAX_WORD_LENGTH; i++) {
    nwordlen[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    switch (c) {
      case ' ':
      case '\t':
      case '\n':
      case '.':
      case ',':
        s = OUT_WORD;
        if (w > 0) {
          nwordlen[w] += 1;
          if (DEBUG) {
            putchar(' ');
            printf("%d", w);
            putchar('\n');
          }
          w = 0;
        }
        break;

      default:
        if (s == OUT_WORD) {
          s = IN_WORD;
        }
        if (s == IN_WORD) {
          w += 1;
          if (DEBUG) {
            putchar(c);
          }
        }
    }
  }

  for (i = 1; i <= MAX_WORD_LENGTH; i++) {
    printf("%2d: ", i);
    for (j = 0; j < nwordlen[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
}
