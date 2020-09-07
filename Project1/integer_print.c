#include <stdio.h>
int integer_print()
{
	int number;		/* declare an integer variable */
	
	printf("Enter an integer: ");

	// reads and stores input
	scanf_s("%d", &number);

	//displays output
	printf("You entered: %d", number);

	return 0;
}