// Copy one structure to another.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter name, roll, marks for student 1: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);

    // Copy s1 into s2
    s2 = s1;

    printf("\nCopied Student Details:\n");
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s2.name, s2.roll, s2.marks);

    return 0;
}
