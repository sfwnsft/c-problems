// A program with two functions that calculates the area of a rectangle and another that calculates the area of a circle.

#include <stdio.h>

int rectangleArea(int length, int width) {
    return length * width;
}

float circleArea(float radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int l, w;
    float r;
    scanf("%d %d %f", &l, &w, &r);

    printf("Rectangle Area: %d\n", rectangleArea(l, w));
    printf("Circle Area: %.2f\n", circleArea(r));
    return 0;
}
