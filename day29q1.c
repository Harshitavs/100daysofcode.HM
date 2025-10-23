//Q57: Find the sum of array elements.
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter no of elements:");
    scanf("%d", &n);  // Read number of elements
    int arr[n];
    // Read elements and calculate sum
    printf("Enter the elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
