#include <stdio.h>

int main() {
    int time;
    scanf("%d", &time);

    if (time >= 6 && time <= 11)
        printf("Pancakes and Coffee\n");
    else if (time >= 12 && time <= 15)
        printf("Chicken Caesar Salad\n");
    else if (time >= 16 && time <= 18)
        printf("Samosa and Chai\n");
    else if (time >= 19 && time <= 22)
        printf("Grilled Steak\n");
    else
        printf("No recommendation available\n");

    return 0;
}
