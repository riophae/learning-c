#include <stdio.h>
#include <stdlib.h>

#define NUL '\0'
#define MAX_LENGTH 127

void copy_n(char dst[], char src[], int n);
int is_string_same(char str1[], char str2[], int limit);

int
main(void) {
  char last_line[MAX_LENGTH];
  char line[MAX_LENGTH];
  int was_same = 0;

  while (gets(line) != NULL) {
    if (is_string_same(line, last_line, MAX_LENGTH)) {
      was_same = 1;
    } else {
      if (was_same) {
        puts(last_line);
      }
      was_same = 0;
    }
    copy_n(last_line, line, MAX_LENGTH);
  }

  return EXIT_SUCCESS;
}

int
is_string_same(char str1[], char str2[], int n) {
  for (int i = 0; i < n; i++) {
    if (str1[i] != str2[i]) {
      return 0;
    }
    if (str1[i] == 0) break;
  }
  return 1;
}

void
copy_n(char dst[], char src[], int n) {
  int dst_idx = 0, src_idx = 0;
  for (; dst_idx < n; dst_idx++) {
    dst[dst_idx] = src[src_idx];
    if (src[src_idx] != 0) {
      src_idx += 1;
    }
  }
}
