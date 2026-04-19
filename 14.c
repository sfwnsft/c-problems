// Print Fibonacci series.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
