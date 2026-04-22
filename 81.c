#include <stdio.h>

int main() {
    int cows, chickens;
    scanf("%d %d", &cows, &chickens);

    if (cows < 0 || chickens < 0) {
        printf("Please enter a valid number.");
        return 0;
    }

    int savings = 0;

    if (cows == 1) savings += 5000;
    else if (cows == 2) savings += 10000;
    else if (cows >= 3) savings += 15000;

    if (chickens == 1) savings += 100;
    else if (chickens == 2) savings += 200;
    else if (chickens >= 3) savings += 300;

    printf("Total savings: %d\n", savings);
    return 0;
}
