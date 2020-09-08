#include <stdio.h>

int swapping()
{
	double first, second, temp;
	printf("Enter first number: ");
	scanf_s("%lf", &first);
	printf("Enter second number: ");
	scanf_s("%lf", &second);

	// Value of first is assigned to temp
	temp = first;

	// Value of second is assigned to first
	first = second;

	// Value of temp (initial value of first) is assigned to second
	second = temp;

	printf("\nAfter swapping, firstNumber = %.2lf\n", first);
	printf("After swapping, secondNumber = %.2lf", second);
	return 0;
}