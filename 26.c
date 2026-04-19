// Check whether a number is a Strong number or not.

#include <stdio.h>

int main() {
    int n, temp, digit, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is a Strong number\n", n);
    }
    else {
        printf("%d is not a Strong number\n", n);
    }

    return 0;
}
