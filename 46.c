// Solve #43 (store 2 students) using function

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void inputStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
}

int main() {
    struct Student s[2];
    inputStudents(s, 2);
    displayStudents(s, 2);
    return 0;
}
