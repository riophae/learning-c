#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUL '\0'
#define MAX 1000

void copy_n(char dst[], char src[], int n);

int
main(void) {
  char str[] = "abc";
  char copy[MAX];

  copy_n(copy, str, strlen(str) + 10);
  printf("Original: %s\n", str);
  printf("Result: %s\n", copy);
  printf("Length of result: %ld\n", strlen(copy));

  return EXIT_SUCCESS;
}

void
copy_n(char dst[], char src[], int n) {
  const int len_of_src = strlen(src);
  for (int i = 0; i < n; i++) {
    dst[i] = i < len_of_src ? src[i] : NUL;
  }
}
