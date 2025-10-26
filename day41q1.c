//Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string (no spaces): ");
    scanf("%s", str);  // reads input until space or newline

    while (str[count] != '\0') {
        count++;
    }

    printf("Character count: %d\n", count);
    return 0;
}
