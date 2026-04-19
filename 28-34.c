// Array input and operations and solve sub-problems.

#include <stdio.h>

int main() {
    int n, arr[100];

    // Problem 28: Take input an array
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Problem 29: Find maximum element
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);

    // Problem 30: Find minimum element
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum element: %d\n", min);

    // Problem 31: Find second largest element
    int largest = arr[0], secondLargest = -99999;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element: %d\n", secondLargest);

    // Problem 32: Find second smallest element
    int smallest = arr[0], secondSmallest = 99999;
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    printf("Second smallest element: %d\n", secondSmallest);

    // Problem 33: Find duplicate elements
    printf("Duplicate elements: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");

    // Problem 34: Delete duplicate elements
    int newArr[100], newSize = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }
    printf("Array after deleting duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    return 0;
}
