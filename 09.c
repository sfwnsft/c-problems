// Print full pyramid pattern using stars (*).

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {      // spaces
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++) { // stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
