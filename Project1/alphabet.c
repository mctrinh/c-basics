#include <stdio.h>

int alphabet()
{
	char c;
	printf("Enter a character: ");
	scanf_s("%c", &c);

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("%c is an alphabet.", c);
	}
	else
	{
		printf("%c is not an alphabet.", c);
	}
	return 0;
}