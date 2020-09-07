#include <stdio.h>
int ASCII_value_character()
{
	char c;
	printf("Enter a character: ");
	scanf_s("%c", &c);

	// %d displays the integer value of a character
	// %c displays the actual character 
	printf("ASCII value of %c = %d", c, c);

	return 0;
}
