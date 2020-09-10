// sort 5 strings entered by the user in the lexicographical order (dictionary order)

#include <stdio.h>
#include <string.h>

int lexicographical_order() {
    char str[5][50], temp[50];
    printf("Enter 5 words: ");

    // Getting strings input
    for (int i = 0; i < 5; ++i) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    // storing strings in the lexicographical order
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {

            // swapping strings if they are not in the lexicographical order
            if (strcmp(str[i], str[j]) > 0) {
                strcpy_s(temp, sizeof temp, str[i]);
                strcpy_s(str[i], sizeof str[i], str[j]);
                strcpy_s(str[j], sizeof str[j], temp);
            }
        }
    }

    printf("\nIn the lexicographical order: \n");
    for (int i = 0; i < 5; ++i) {
        fputs(str[i], stdout);
    }
    return 0;
}