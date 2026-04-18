// Find frequency of digits in a number.

#include <stdio.h>

int main() {
    int num, n;
    int lastDigit;
    int freq[10] = {0};

    printf("Enter any number: ");
    scanf("%d", &num);

    // Store num in a temporary variable n to keep the original input
    n = num;

    if (n == 0) {
        freq[0] = 1;
    } 
    else {
        if (n < 0) {
            n = -n; // Make the number positive if it's negative
        }
        while (n > 0) {
            lastDigit = n % 10; // Get the last digit
            freq[lastDigit]++; // Increment frequency in the array
            n /= 10; // Remove the last digit
        }
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("Frequency of digit %d: %d\n", i, freq[i]);
        }
    }

    return 0;
}
