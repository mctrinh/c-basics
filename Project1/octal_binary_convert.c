#include <math.h>
#include <stdio.h>

// convert binary to octal
// to use the function 'convert' in this file, should comment out the function 'convert' in file 'binary_decimal_convert.c'

//inline int convert(long long bin);
//
//int main() {
//    long long bin;
//    printf("Enter a binary number: ");
//    scanf_s("%lld", &bin);
//    printf("%lld in binary = %d in octal", bin, convert(bin));
//    return 0;
//}
//
//int convert(long long bin) {
//    int oct = 0, dec = 0, i = 0;
//
//    // converting binary to decimal
//    while (bin != 0) {
//        dec += (bin % 10) * pow(2, i);
//        ++i;
//        bin /= 10;
//    }
//    i = 1;
//
//    // converting to decimal to octal
//    while (dec != 0) {
//        oct += (dec % 8) * i;
//        dec /= 8;
//        i *= 10;
//    }
//    return oct;
//}


// convert octal to binary

inline long long convert(int oct);
int octal_binary_convert() {
    int oct;
    printf("Enter an octal number: ");
    scanf_s("%d", &oct);
    printf("%d in octal = %lld in binary", oct, convert(oct));
    return 0;
}

long long convert(int oct) {
    int dec = 0, i = 0;
    long long bin = 0;

    // converting octal to decimal
    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

    // converting decimal to binary
    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}
