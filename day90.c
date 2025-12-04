
//Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include<stddef.h>
// Define enum for Gender
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

// Define struct Person with Gender
typedef struct {
    Gender gender;
} Person;

int main() {
    Person p;
    int input;

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &input);

    if (input < 0 || input > 2) {
        printf("Invalid input.\n");
        return 1;
    }

    p.gender = (Gender)input;

    printf("Gender: ");
    switch (p.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER: printf("Other\n"); break;
    }

    return 0;
}

