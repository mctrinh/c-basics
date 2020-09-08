#include <stdio.h>

// hcf: Highest Common Factor
// gcd: Greatest Common Divisor

// 1st way: using 'for' loop and 'if' statement

//int main()
//{
//    int n1, n2, i, gcd;
//
//    printf("Enter two integers: ");
//    scanf_s("%d %d", &n1, &n2);
//
//    for (i = 1; i <= n1 && i <= n2; ++i)
//    {
//        // Checks if i is factor of both integers
//        if (n1 % i == 0 && n2 % i == 0)
//            gcd = i;
//    }
//
//    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
//
//    return 0;
//}

// 2nd way: using 'while' loop and 'if...else' statement

//int main()
//{
//    int n1, n2;
//
//    printf("Enter two positive integers: ");
//    scanf_s("%d %d", &n1, &n2);
//
//    while (n1 != n2)
//    {
//        if (n1 > n2)
//            n1 -= n2;
//        else
//            n2 -= n1;
//    }
//    printf("GCD = %d", n1);
//
//    return 0;
//}

// 3rd way: for both positive and negative numbers

int hcf_gcd()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf_s("%d %d", &n1, &n2);

    // if user enters negative number, sign of the number is changed to positive
    n1 = (n1 > 0) ? n1 : -n1;
    n2 = (n2 > 0) ? n2 : -n2;

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d", n1);

    return 0;
}