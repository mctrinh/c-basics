#include <stdio.h>
#include <stdlib.h> // For exit() function
int read_file() {
    char c[1000];
    FILE* fptr;
    if ((fptr = fopen_s(&fptr, "program.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        // the program always fall into this Error!
        exit(1);
    }

    // reads text until newline is encountered
    fscanf_s(fptr, "%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}