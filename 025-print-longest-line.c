#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int getCharLine(char line[], int limit);
void copy(char to[], char from[]);

int main() {
  int len;
  int max = 0;
  char line[MAX_LINE_LENGTH];
  char longest[MAX_LINE_LENGTH];

  while ((len = getCharLine(line, MAX_LINE_LENGTH)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("The longest line:\n%s", longest);
  }
}

int getCharLine(char s[], int limit) {
  int i, c;
  for (i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
