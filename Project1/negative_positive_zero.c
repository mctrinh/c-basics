#include <stdio.h>

// 1st method: using if...else

//int negative_positive_zero()
//{
//	double num;
//	printf("Enter a number: ");
//	scanf_s("%lf", &num);
//	if (num <= 0.0)
//	{
//		if (num == 0.0)
//		{
//			printf("You entered 0.");
//		}
//		else
//		{
//			printf("You entered a negative number.");
//		}
//	}
//	else
//	{
//		printf("You entered a positive number.");
//	}
//	return 0; 
//}

// 2nd method: using nested if...else

int negative_positive_zero()
{
	double num;
	printf("Enter a number: ");
	scanf_s("%lf", &num);

	if (num < 0.0)
	{
		printf("You entered a negative number.");
	}
	else if (num > 0.0)
	{
		printf("You entered a positive number.");
	}
	else
	{
		printf("You entered 0.");
	}
	return 0;
}