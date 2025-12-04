//Q143: Find and print the student with the highest marks.
#include <stdio.h>
#include<stddef.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    int top_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    printf("\nTopper: %s (Marks: %.2f)\n", students[top_index].name, students[top_index].marks);

    return 0;
}

