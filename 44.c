// Store 1000 student records using array of structures

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[1000];
    int n;

    printf("How many students (max 1000)? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);

    return 0;
}
