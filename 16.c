// Reverse a string and check for Palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    printf("Reversed: %s\n", rev);

    if (strcmp(str, rev) == 0) {
        printf("\"%s\" is a Palindrome\n", str);
    }
    else {
        printf("\"%s\" is not a Palindrome\n", str);
    }

    return 0;
}
