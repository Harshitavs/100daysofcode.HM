//Q86: Check if a string is a palindrome.
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
    char string[101], store[101];
    int i, length;

    printf("Enter the word:\n");
    scanf("%s", string);  // Corrected: removed &

    length = strlen(string);

    // Copy original string to store
    for (i = 0; i < length; i++) {
        store[i] = string[i];
    }
    store[length] = '\0';  // Null terminate the copied string

    revstring(string);

    if (strcmp(store, string) == 0) {
        printf("The word is a palindrome.\n");
    } else {
        printf("The word is not a palindrome.\n");
    }

    return 0;
}



