#include <stdio.h>

#define IN 0
#define OUT 1
#define MAX_LENGTH 9999

void trimTail(char s[], char o[]);

int main() {
  char src[MAX_LENGTH], output[MAX_LENGTH];
  int c, i = 0;
  while ((c = getchar()) != '\n' && i <= MAX_LENGTH) {
    src[i++] = c;
  }
  src[i++] = '\n';
  src[i++] = '\0';
  trimTail(src, output);
  printf("%s\n", output);
}

void trimTail(char src[], char output[]) {
  int i;
  char c;
  int intail = IN;
  int s = -1;
  for (i = 0; (c = src[i]) != '\n'; i++) {
    switch (c) {
      case ' ':
      case '\t':
        intail = OUT;
        break;

      default:
        intail = IN;
    }
    if (intail == IN) {
      s = i;
    }
  }
  for (i = 0; i <= s; i++) {
    output[i] = src[i];
  }
  output[i] = '+'; // indicate the line ends
}
