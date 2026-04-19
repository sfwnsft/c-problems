// Reverse string and check Palindrome using functions.

#include <stdio.h>
#include <string.h>

void reverseString(char str[], char rev[]) {
    
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
}

int isPalindrome(char str[], char rev[]) {
    return strcmp(str, rev) == 0;
}

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str, rev);
    printf("Reversed: %s\n", rev);

    if (isPalindrome(str, rev)) {
        printf("\"%s\" is a Palindrome\n", str);
    }
    else {
        printf("\"%s\" is not a Palindrome\n", str);
    }

    return 0;
}
