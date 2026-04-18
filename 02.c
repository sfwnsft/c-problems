// Check even or odd, positive, negative, or zero.

#include<stdio.h>
int main () {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("%d is positive\n", n);
    }
    else if (n < 0) {
        printf("%d is negative\n", n);
    }
    else {
        printf("The number is 0\n");
    }

    if (n % 2 == 0) {
        printf("%d is even\n", n);
    }
    else {
        printf("%d is odd\n", n);
    }
    
    return 0;
}
