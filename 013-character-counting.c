#include <stdio.h>

int main()
{
	long count = 0;
	int cur;

	printf("Please input any and press ctrl + d to count.\n");

	while ((cur = getchar()) != EOF)
		++count;

	printf("Character count: %ld\n", count);
}
