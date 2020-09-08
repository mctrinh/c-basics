#include <stdio.h>

// 1st method: use if statement

//int main()
//{
//	double n1, n2, n3;
//	printf("Enter three different numbers: ");
//	scanf_s("%lf %lf %lf", &n1, &n2, &n3);
//
//	// if n1 is greater than both n2 and n3, n1 is the largest
//	if (n1 >= n2 && n1 >= n3)
//	{
//		printf("%.2f is the largest number.", n1);
//	}
//
//	// if n2 is greater than both n1 and n3, n2 is the largest
//	if (n2 >= n1 && n2 >= n3)
//	{
//		printf("%.2f is the largest number.", n2);
//	}
//
//	// if n3 is greater than both n1 and n2, n3 is the largest
//	if (n3 >= n1 && n3 >= n2)
//	{
//		printf("%.2f is the largest number.", n3);
//	}
//	return 0;
//}

// 2nd method: use if ... else ladder

//int main()
//{
//	double n1, n2, n3;
//	printf("Enter three number :");
//	scanf_s("%lf %lf %lf", &n1, &n2, &n3);
//
//	// if n1 is greater than both n2 and n3, n1 is the largest
//	if (n1 >= n2 && n1 >= n3)
//		printf("%.2lf is the largest number.", n1);
//
//	// if n2 is greater than both n1 and n3, n2 is the largest
//	else if (n2 >= n1 && n2 >= n3)
//		printf("%.2lf is the largest number.", n2);
//
//	// if n3 is greater than both n1 and n2, n3 is the largest
//	else
//		printf("%.2lf is the largest number.", n3);
//
//	return 0;
//}

// 3rd method: use nested if ... else

int largest_number_three()
{
	double n1, n2, n3;
	printf("Enter three numbers: ");
	scanf_s("%lf %lf %lf", &n1, &n2, &n3);

	if (n1 >= n2)
	{
		if (n1 >= n3)
		{
			printf("%.2lf is the largest number.", n1);
		}
		else
		{
			printf("%.2lf is the largest number.", n3);
		}
	}
	else
	{
		if (n2 >= n3)
		{
			printf("%.2lf is the largest number.", n2);
		}
		else
		{
			printf("%.2lf is the largest number.", n3);
		}
	}
	return 0;
}
