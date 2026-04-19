// Count vowels, consonants, digits, and spaces in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
        else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
        else if (c >= '0' && c <= '9') {
            digits++;
        }
        else if (c == ' ') {
            spaces++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    return 0;
}
