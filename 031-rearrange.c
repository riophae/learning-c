#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 1
#define NUL '\0'

#define MAX_COL 20
#define MAX_INPUT 20

int read_column_numbers(int [], int);
void rearrange(char *output, char const *, int const, int const []);

int main(void) {
  int n_columns;
  int columns[MAX_COL];

  n_columns = read_column_numbers(columns, MAX_COL);

  char input[MAX_INPUT];
  char output[MAX_INPUT];
  while (gets(input) != NULL) {
    printf("Original input: %s\n", input);
    rearrange(output, input, n_columns, columns);
    printf("Rearranged line: %s\n", output);
  }

  return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max) {
  int i = 0;
  int number;

  while (i < max && (scanf("%d", &number) == TRUE) && number > -1) {
    columns[i] = number;

    if (i % 2 == 1) {
      if (columns[i] - columns[i - 1] < 0) {
        printf("The latter of pair should be no less than the former.\n");
        exit(EXIT_FAILURE);
      }
    }

    i += 1;
  }

  char ch;
  while ((ch = getchar()) != EOF && ch != '\n')
    ;

  return i;
}

void rearrange(char *output, char const *input, int const n_columns, int const columns[]) {
  int accum = 0;
  int len = strlen(input);

  for (int i = 0; i < n_columns; i += 2) {
    int start = columns[i];
    int end = i + 1 == n_columns ? len : columns[i + 1];
    int nchars = end - start;

    if (start >= len) {
      continue;
    }

    if (accum + nchars > MAX_INPUT) {
      nchars = MAX_INPUT - accum;
    }

    strncpy(output + accum, input + start, nchars);
    accum += nchars;
  }

  output[accum] = NUL;
}
