// Check even or odd, positive, negative, or zero using function

#include<stdio.h>

void checkSign(int n) {
    if (n > 0) {
        printf("%d is positive\n", n);
    }
    else if (n < 0) {
        printf("%d is negative\n", n);
    }
    else {
        printf("The number is 0\n");
    }
}

void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is Even\n", n);
    }
    else {
        printf("%d is Odd\n", n);
    }
}
 
int main() {

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkSign(n);
    checkEvenOdd(n);

    return 0;
}
