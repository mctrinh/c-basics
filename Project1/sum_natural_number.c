#include <stdio.h>

// 1st method: using for loop

//int main()
//{
//	int n, i, sum = 0;
//
//	printf("Enter a positive number: ");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; ++i)
//	{
//		sum += i;
//	}
//
//	printf("Sum = %d", sum);
//	return 0;
//}

// 2nd method: using while loop

int sum_natural_number()
{
	int n, i, sum = 0;

	printf("Enter a positive number: ");
	scanf_s("%d", &n);

	i = 1;

	while (i <= n)
	{
		sum += i;
		++i;
	}
	
	printf("Sum = %d", sum);
	return;
}