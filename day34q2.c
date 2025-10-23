//Q68: Delete an element from an array.
#include <stdio.h>
int main() {
    int n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position\n");
        return 1;
    }
// Shift elements left from the position
    for (int i = pos; i < n - 1; i++)\
    {
        arr[i] = arr[i + 1];
}
    // Print the array after deletion
    printf("Array after deletion: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

