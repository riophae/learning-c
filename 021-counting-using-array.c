#include <stdio.h>

#define IN_WORD 0
#define OUT_WORD 1

#define IS_WORD_CHARACTER 0
#define NOT_WORD_CHARACTER 1

#define OUTPUT_PER_LINE 3

int main()
{
  int i, c, s, state = OUT_WORD;
  int ndigit[10];
  int nwhite = 0, nword = 0, nt = 0, nl = 0, no = 0;

  for (i = 0; i < 10; i++) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    s = NOT_WORD_CHARACTER;

    if (c >= '0' && c <= '9') {
      s = IS_WORD_CHARACTER;
      ndigit[c - '0'] += 1;
    }
    else if (c == ' ') {
      nwhite += 1;
    }
    else if (c == '\t') {
      nt += 1;
    }
    else if (c == '\n') {
      nl += 1;
    }
    else {
      no += 1;
      s = IS_WORD_CHARACTER;
    }

    if (s == IS_WORD_CHARACTER) {
      if (state == OUT_WORD) {
        nword += 1;
        state = IN_WORD;
      }
    } else {
      state = OUT_WORD;
    }
  }

  for (i = 0; i < 20; i++) {
    printf("*");
  }
  printf("\n");

  printf("digits:");
  for (i = 0; i < 10; i++) {
    if (i % OUTPUT_PER_LINE == 0) {
      printf("\n");
    }
    printf("%d: %3d", i, ndigit[i]);
    if (i % OUTPUT_PER_LINE != OUTPUT_PER_LINE - 1) {
      printf("\t");
    }
  }

  printf("\n\n");

  printf("whitespaces: %d\n", nwhite);
  printf("tabs: %d\n", nt);
  printf("new lines: %d\n", nl);
  printf("words: %d\n", nword);
  printf("other characters: %d\n", no);

}
