//Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1]; // Extra space for new element
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position and value to insert: ");
    scanf("%d %d", &pos, &val);
    // Shift elements to the right from the position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val; // Insert value

    // Print new array
    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

