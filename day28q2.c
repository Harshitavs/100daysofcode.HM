//Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>
int main() {
    int n;
    printf("Enter total no of elements :");
    scanf("%d", &n);  // Read size of array

    int arr[n];

    // Read array elements
    printf("Enter the elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
