//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
    int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // One extra space for new element
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];  // Shift elements right
        i--;
    }
    arr[i + 1] = key;  // Insert element

    // Print new array
    printf("Array after insertion: ");
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}


