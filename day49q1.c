//Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to print initials
void printInitials(char name[]) {
    if (isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    printf("\n");
}

int main() {
    char name[100];
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove trailing newline

    printInitials(name);

    return 0;
}

