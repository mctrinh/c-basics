#include <stdio.h>
int product_numbers()
{
	double a, b, product;
	printf("Enter two numbers: ");
	scanf_s("%lf %lf", &a, &b);
	
	// Calculating product
	product = a * b;

	// Result up to 2 decimal point is displayed using %.2lf
	printf("Product of %lf and %lf is %.2lf", a, b, product);

	return 0;
}