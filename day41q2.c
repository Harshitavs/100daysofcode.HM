//Q82: Print each character of a string on a new line.
#include <stdio.h>
int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string (no spaces): ");
    scanf("%s", str);  // Reads input until space

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
