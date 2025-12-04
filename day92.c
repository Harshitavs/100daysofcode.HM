//Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>
#include<stddef.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    printf("Enter details of 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nList of Students:\n");
    printf("Name\tRoll\tMarks\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}

