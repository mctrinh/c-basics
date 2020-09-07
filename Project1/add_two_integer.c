#include <stdio.h>
int add_two_integer()
{
	int number1, number2, sum;
	
	printf("Enter two integers: ");
	scanf_s("%d %d", &number1, &number2);

	//calculating sum
	sum = number1 + number2;

	printf("%d + %d = %d", number1, number2, sum);
	return 0;
}