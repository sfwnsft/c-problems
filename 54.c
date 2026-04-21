// Print source code of itself.

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen(__FILE__, "r");  // __FILE__ is the name of current source file
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
