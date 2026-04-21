// Find max and min using function.

#include <stdio.h>

void findMaxMin(int arr[][10], int rows, int cols, int *max, int *min) {
    *max = arr[0][0];
    *min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > *max) *max = arr[i][j];
            if (arr[i][j] < *min) *min = arr[i][j];
        }
    }
}

int main() {
    int rows, cols, max, min;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int arr[10][10];
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    findMaxMin(arr, rows, cols, &max, &min);
    printf("Maximum: %d\nMinimum: %d\n", max, min);
    return 0;
}
