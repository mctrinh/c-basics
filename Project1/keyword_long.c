#include <stdio.h>
int keyword_long()
{
	int a;
	long b;			// equivalent to long int b;
	long long c;	// equivalent to long long int c;
	double e;
	long double f;

	printf("Size of int = %zu bytes \n", sizeof(a));
	printf("Size of long int = %zu bytes \n", sizeof(b));
	printf("Size of long long int = %zu bytes \n", sizeof(c));
	printf("Size of double = %zu bytes \n", sizeof(e));
	printf("Size of long double = %zu bytes \n", sizeof(f));

	// sizeof operator returns size_t (unsigned integral type). 
	// size_t data type is used to represent the size of an object.
	// The format specifier used for size_t is %zu.

	return 0;
}