#include <stdio.h>
#include <math.h>

int quadratic_roots()
{
	double a, b, c, discriminant, root1, root2, realPart, imagPart;
	printf("Enter coefficient a, b, and c: ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	// condition for real and different roots
	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
	}

	// condition for real and equal roots
	if (discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.2lf: ", root1);
	}

	// of roots are not real
	else
	{
		realPart = -b / (2 * a);
		imagPart = sqrt(-discriminant) / (2 * a);
		printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi", realPart, imagPart, realPart, imagPart);
	}
	return 0;
}