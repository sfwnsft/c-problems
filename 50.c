// Concatenate strings using pointers.

#include <stdio.h>

void concatStrings(char *dest, char *src) {
    while (*dest != '\0') dest++;   // go to end of dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[100], str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    concatStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
