// Convert Decimal to Binary number system.

#include <stdio.h>

int main() {
    int n, binary[100], count = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[count] = n % 2;
        count++;
        n /= 2;
    }

    printf("Binary: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
