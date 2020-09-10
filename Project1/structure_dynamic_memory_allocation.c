#include <stdio.h>
#include <stdlib.h>
struct course {
    int marks;
    char subject[30];
};

int structure_dynamic_memory_allocation() {
    struct course* ptr;
    int i, noOfRecords;
    printf("Enter the number of records: ");
    scanf_s("%d", &noOfRecords);

    // Memory allocation for noOfRecords structures
    ptr = (struct course*)malloc(noOfRecords * sizeof(struct course));
    for (i = 0; i < noOfRecords; ++i) {
        printf("Enter the name of the subject:\n");
        scanf_s("%s", (ptr + i)->subject, 20);
        printf("Enter marks respectively:\n");
        scanf_s("%d", &(ptr + i)->marks);

        // by separating %s and %d calls, the code works, but combined them as below, the code doesn't work???
        //printf("Enter the name of the subject and marks respectively:\n");
        //scanf_s("%s %d", (ptr + i)->subject, 20, &(ptr + i)->marks);
    }

    printf("Displaying Information:\n");
    for (i = 0; i < noOfRecords; ++i)
        printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);

    return 0;
}