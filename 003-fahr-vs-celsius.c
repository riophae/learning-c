#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-30) / 9; /* 整数相除连写在一起会取余数 */
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
