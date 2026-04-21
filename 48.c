// Create, initialize and use pointer.

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;   // pointer pointing to num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);
    printf("Value via pointer: %d\n", *ptr);

    *ptr = 50;   // change value using pointer
    printf("New value of num: %d\n", num);

    return 0;
}
