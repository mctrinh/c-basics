#include <stdio.h>
int even_odd()
{
	int num;
	printf("Enter an integer: ");
	scanf_s("%d", &num);

	// True if num is perfectly divisible by 2
	if (num % 2 == 0)
		printf("%d is even.", num);
	else
	{
		printf("%d is odd.", num);
	}
	return 0;
}