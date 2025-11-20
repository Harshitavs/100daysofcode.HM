//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitialsWithSurname(char name[]) {
    int len = strlen(name);
    int start = 0;
    int wordStart = 0;
    char surname[50];
    int wordCount = 0;

    printf("Initials: ");

    // Traverse to find initials and store last word as surname
    for (int i = 0; i <= len; i++) {
        if (name[i] == ' ' || name[i] == '\0') {
            if (wordCount == 0) {
                printf("%c.", toupper(name[wordStart]));
            } else {
                printf("%c.", toupper(name[wordStart]));
            }
            strncpy(surname, &name[wordStart], i - wordStart);
            surname[i - wordStart] = '\0';
            wordStart = i + 1;
            wordCount++;
        }
    }

    // Print surname in full
    printf(" %s\n", surname);
}

int main() {
    char fullName[100];
    printf("Enter full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove trailing newline if present
    fullName[strcspn(fullName, "\n")] = '\0';

    printInitialsWithSurname(fullName);
    return 0;
}

