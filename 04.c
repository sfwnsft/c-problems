// Take input two numbers and print sum, difference, remainder, product.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0) {
        printf("Remainder  = %d\n", a % b);
    }
    else {
        printf("Remainder: Division by zero!\n");
    }

    return 0;
}