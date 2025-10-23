//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
 int n;
 printf("Enter the size of square matrix: ");
 scanf("%d", &n);

    int matrix[n][n], diag[n];
    int isDistinct = 1;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Extract diagonal elements
    for (int i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    // Check for duplicates in diagonal
    for (int i = 0; i < n && isDistinct; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

