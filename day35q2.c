//Q70: Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter rotation count (k): ");
    scanf("%d", &k);

    // Normalize k
    k = k % n;

    // Temporary array to store rotated version
    int rotated[n];

    // Copy last k elements to start
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy first (n - k) elements after that
    for (int i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

    // Output rotated array
    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}

