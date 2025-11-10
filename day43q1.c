//Q85: Reverse a string.
#include <stdio.h>
#include <string.h>
void revstring(char string[]) {
    int i, k;
    char store;
    int length = strlen(string);
    
    for (i = 0, k = length - 1; i < k; i++, k--) {
        store = string[i];
        string[i] = string[k];
        string[k] = store;
    }
}

int main() {
    char string[101];

    printf("Enter the word:\n");
    scanf("%s", string);  // Correct: no & needed

    printf("Word: %s\n", string);

    revstring(string);

    printf("Reversed Word: %s\n", string);
    
    return 0;
}


