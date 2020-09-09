// using 'while' loop

#include <stdio.h>
int power_number() 
{
    int base, exp;
    long long result = 1;
    printf("Enter a base number: ");
    scanf_s("%d", &base);
    printf("Enter an exponent: ");
    scanf_s("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %lld", result);
    return 0;
}