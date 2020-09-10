#include <stdio.h>
#include <stdlib.h>

int write_file() {
    char sentence[1000];

    // creating file pointer to work with files
    FILE* fptr;

    // opening file in writing mode
    fptr = fopen_s(&fptr, "program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");       // always get this results when running this program???
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}