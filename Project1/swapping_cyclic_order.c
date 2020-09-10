#include <stdio.h>
void cyclicSwap(int* a, int* b, int* c);        // int* defines pointers
int swapping_cyclic_order() {
    int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf_s("%d %d %d", &a, &b, &c);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    cyclicSwap(&a, &b, &c);             // &a is the address (pointer to) a

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

void cyclicSwap(int* n1, int* n2, int* n3) {
    int temp;
    // swapping in cyclic order
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}