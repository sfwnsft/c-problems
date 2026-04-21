// Copy one file to another.

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("source.txt", "r");
    if (src == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    dest = fopen("destination.txt", "w");

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");

    return 0;
}
