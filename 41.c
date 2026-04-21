// Merge two arrays using function.

#include <stdio.h>

void mergeArrays(int a[], int r1, int c1, int b[], int r2, int c2, int merged[], int *size) {
    int k = 0;
    for (int i = 0; i < r1 * c1; i++) merged[k++] = a[i];
    for (int i = 0; i < r2 * c2; i++) merged[k++] = b[i];
    *size = k;
}

int main() {
    int a[100], b[100], merged[200], size;
    int r1, c1, r2, c2;

    printf("Enter rows and cols for array 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements:\n");
    for (int i = 0; i < r1 * c1; i++) scanf("%d", &a[i]);

    printf("Enter rows and cols for array 2: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements:\n");
    for (int i = 0; i < r2 * c2; i++) scanf("%d", &b[i]);

    mergeArrays(a, r1, c1, b, r2, c2, merged, &size);

    printf("Merged array: ");
    for (int i = 0; i < size; i++) printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
