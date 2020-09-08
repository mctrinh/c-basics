#include <stdio.h>

// Fibonacci series up to n terms

//int main() 
//{
//    int i, n, t1 = 0, t2 = 1, nextTerm;
//    printf("Enter the number of terms: ");
//    scanf_s("%d", &n);
//    printf("Fibonacci Series: ");
//
//    for (i = 1; i <= n; ++i)
//    {
//        printf("%d, ", t1);
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//    }
//    return 0;
//}


// Fibonacci series up to a certain number

int fibonacci_series()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    printf("Enter a positive number: ");
    scanf_s("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}