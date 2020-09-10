// half pyramid of *

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//        for (j = 1; j <= i; ++j) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}



// half pyramid of numbers

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }
//    return 0;
//}


// inverted half pyramid of *

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//        for (j = 1; j <= i; ++j) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}



// inverted half pyramid of numbers

//#include <stdio.h>
//int main() {
//    int i, j, rows;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//        for (j = 1; j <= i; ++j) {
//            printf("%d ", j);
//        }
//        printf("\n");
//    }
//    return 0;
//}



// full pyramid of *

//#include <stdio.h>
//int main() {
//    int i, space, rows, k = 0;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = 1; i <= rows; ++i, k = 0) {
//        for (space = 1; space <= rows - i; ++space) {
//            printf("  ");
//        }
//        while (k != 2 * i - 1) {
//            printf("* ");
//            ++k;
//        }
//        printf("\n");
//    }
//    return 0;
//}



// full pyramid of numbers

//#include <stdio.h>
//int main() {
//    int i, space, rows, k = 0, count = 0, count1 = 0;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = 1; i <= rows; ++i) {
//        for (space = 1; space <= rows - i; ++space) {
//            printf("  ");
//            ++count;
//        }
//        while (k != 2 * i - 1) {
//            if (count <= rows - 1) {
//                printf("%d ", i + k);
//                ++count;
//            }
//            else {
//                ++count1;
//                printf("%d ", (i + k - 2 * count1));
//            }
//            ++k;
//        }
//        count1 = count = k = 0;
//        printf("\n");
//    }
//    return 0;
//}


// inverted full pyramid of *

//#include <stdio.h>
//int main() {
//    int rows, i, j, space;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//        for (space = 0; space < rows - i; ++space)
//            printf("  ");
//        for (j = i; j <= 2 * i - 1; ++j)
//            printf("* ");
//        for (j = 0; j < i - 1; ++j)
//            printf("* ");
//        printf("\n");
//    }
//    return 0;
//}


// Pascal's triangle

//#include <stdio.h>
//int main() {
//    int rows, coef = 1, space, i, j;
//    printf("Enter the number of rows: ");
//    scanf_s("%d", &rows);
//    for (i = 0; i < rows; i++) {
//        for (space = 1; space <= rows - i; space++)
//            printf("  ");
//        for (j = 0; j <= i; j++) {
//            if (j == 0 || i == 0)
//                coef = 1;
//            else
//                coef = coef * (i - j + 1) / j;
//            printf("%4d", coef);
//        }
//        printf("\n");
//    }
//    return 0;
//}


// Floyd's Triangle
#include <stdio.h>
int pyramid_pattern() {
    int rows, i, j, number = 1;
    printf("Enter the number of rows: ");
    scanf_s("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
    return 0;
}