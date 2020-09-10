// store the information of 5 students by using an array of structures

#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int information_structure_array() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf_s("%s", s[i].firstName, 20);      // scanf_s require to define to define a buffer size parameter be passed preceding of type c, C, s, S, or [
        printf("Enter marks: ");
        scanf_s("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}