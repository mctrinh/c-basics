#include <stdio.h>
int reverse_number() 
{
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf_s("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}