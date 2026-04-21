// Merge two files.

#include <stdio.h>

int main() {
    FILE *f1, *f2, *merged;
    char ch;

    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    merged = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("One or both files not found!\n");
        return 1;
    }

    // Copy file1 into merged
    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, merged);

    // Copy file2 into merged
    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, merged);

    fclose(f1);
    fclose(f2);
    fclose(merged);
    printf("Files merged into merged.txt\n");

    return 0;
}
