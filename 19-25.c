// Take input two strings and solve all sub-problems.

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], concat[200];
    int len1, len2;

    // Problem 19: Take input two strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    
    // Problem 20: Find their lengths
    len1 = strlen(str1);
    len2 = strlen(str2);
    printf("Length of %s = %d\n", str1, len1);
    printf("Length of %s = %d\n", str2, len2);
    
    // Problem 21: Find the lexicographically larger string
    if (strcmp(str1, str2) > 0) {
        printf("%s is lexicographically larger\n", str1);
    }
    else if (strcmp(str1, str2) < 0) {
        printf("%s is lexicographically larger\n", str2);
    }
    else {
        printf("Both strings are equal\n");
    }
    
    // Problem 22: Concatenate larger with shorter string
    if (len1 >= len2) {
        strcpy(concat, str1);
        strcat(concat, str2);
    }
    else {
        strcpy(concat, str2);
        strcat(concat, str1);
    }
    printf("Concatenated string: %s\n", concat);
    
    // Problem 23: Find number of special characters in concatenated string
    int special = 0;
    for (int i = 0; concat[i] != '\0'; i++) {
        char c = concat[i];
        if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z') && (c < '0' || c > '9') && c != ' ') {
            special++;
        }
    }
    printf("Number of special characters: %d\n", special);
    
    // Problem 24: Check if 'r' is present in the string
    int found = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == 'r' || str1[i] == 'R') {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("'r' is present in %s\n", str1);
    }
    else {
        printf("'r' is not present in %s\n", str1);
    }
    
    // Problem 25: Delete the character at position 3 (index 2)
    if (len1 >= 3) {
        for (int i = 2; str1[i] != '\0'; i++) {
            str1[i] = str1[i + 1];
        }
        printf("After deleting 3rd character: %s\n", str1);
    }
    else {
        printf("String has fewer than 3 characters!\n");
    }
    return 0;
}
