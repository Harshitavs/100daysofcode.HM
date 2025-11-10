//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    int i;

    printf("Enter a word:\n");
    scanf("%s", string);  // No & needed, as string name is already a pointer

    printf("Word before: %s\n", string);

    // Convert to uppercase
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32; 
        }
    }

    printf("Word after: %s\n", string);
    return 0;
}


