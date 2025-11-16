//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    sentence[strcspn(sentence, "\n")] = 0;

    while (1) {
        // If space or end of string
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0; // Reset for next word
            if (sentence[i] == '\0') break;
        } else {
            word[j++] = sentence[i];
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}

