// Sum, Difference, Remainder, Product using functions.

#include <stdio.h>

void getSum(int a, int b) {
    printf("Sum = %d\n", a + b);
}

void getDifference(int a, int b) {
    printf("Difference = %d\n", a - b);
}

void getProduct(int a, int b) {
    printf("Product = %d\n", a * b);
}

void getRemainder(int a, int b) {
    if (b != 0) {
        printf("Remainder = %d\n", a % b);
    }
    else {
        printf("Remainder: Division by zero!\n");
    }
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    getSum(a, b);
    getDifference(a, b);
    getProduct(a, b);
    getRemainder(a, b);

    return 0;
}
