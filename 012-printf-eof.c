#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
		printf("Not EOF: %d\n", c);

	/* press control + d at the beginning of line to supply a EOF */
	printf("EOF: %d\n", c); 
}
