//*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (i = 0; i < n; i++) {
        int visited[256] = {0}; // Track characters in current substring
        for (j = i; j < n; j++) {
            if (visited[(int)s[j]] == 1)  // If repeated
                break;
            visited[(int)s[j]] = 1;
            if (j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }

    printf("%d", maxLen);
    return 0;
}
