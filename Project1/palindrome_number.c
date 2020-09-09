// A palindrome number remains the same when its digits are reversed.

#include <stdio.h>
int palindrome_number() 
{
    int n, reversedN = 0, remainder, originalN;
    printf("Enter an integer: ");
    scanf_s("%d", &n);
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

    return 0;
}