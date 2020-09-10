//#include <stdio.h>
//int main() {
//
//	// location the current input file.
//	printf("%s", __FILE__);
//}

#include <stdio.h>
int source_code_output() {
    FILE* fp;
    int c;

    // open the current input file
    fp = fopen_s(&fp, __FILE__, "r");

    do {
        c = getc(fp);   // read character from file
        putchar(c);     // display character
    } while (c != EOF);  // loop until the end of file is reached

    fclose(fp);
    return 0;
}