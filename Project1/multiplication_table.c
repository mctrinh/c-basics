#include <stdio.h>

int multiplication_table()
{
	int n, i, range;
	printf("Enter an integer: ");
	scanf_s("%d", &n);
	printf("Enter the range: ");
	scanf_s("%d", &range);
	for (i = 1; i <= range; ++i)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
	return 0;
}