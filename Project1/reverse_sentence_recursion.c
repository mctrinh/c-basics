#include <stdio.h>
void reverseSentence();
int reverse_sentence_recursion() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf_s("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}