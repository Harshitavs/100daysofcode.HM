//Q61: Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, key, index = -1;
    printf("Enter the no of elements");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search:");
    scanf("%d", &key);  // Element to search

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}

