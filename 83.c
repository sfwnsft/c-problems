// A program that takes a student's name and their score (float), and prints whether they passed or failed.

#include <stdio.h>

void checkResult(char name[], float score) {
    if (score >= 33.0) {
        printf("%s: Passed\n", name);
    }
    else {
        printf("%s: Failed\n", name);
    }
}

int main() {
    char name[100];
    float score;
    scanf("%s %f", name, &score);
    checkResult(name, score);
    return 0;
}
