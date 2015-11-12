#include <stdio.h>
#include <stdlib.h>

int substr(char dst[], char src[], int start, int len);

int
main(void) {
  char src[] = "abcdefghijklmnopqrstuvwxyz0123456789";
  char sub[10];

  int len = substr(sub, src, 20, 10);
  printf("Copied: %s\n", sub);
  printf("Length: %d\n", len);
  return EXIT_SUCCESS;
}

int
substr(char dst[], char src[], int start, int len) {
  int src_idx = start, dst_idx = 0;
  int copied_len = 0;

  for (; dst_idx < len; dst_idx++) {
    dst[dst_idx] = src[src_idx];
    if (src[src_idx] != 0) {
      copied_len += 1;
      src_idx += 1;
    }
  }
  dst[dst_idx] = '\0';

  return copied_len;
}
