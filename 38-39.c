// Take two 2D arrays and merge them

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and cols for array 1: ");
    scanf("%d %d", &r1, &c1);

    int a[10][10], b[10][10];

    printf("Enter elements of array 1:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and cols for array 2: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of array 2:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Merge: flatten both into one array
    int merged[200], k = 0;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            merged[k++] = a[i][j];
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            merged[k++] = b[i][j];

    printf("Merged array: ");
    for (int i = 0; i < k; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
