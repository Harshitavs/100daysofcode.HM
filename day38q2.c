//Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main() {
int n;
printf("Enter the size of square matrix: ");
 scanf("%d", &n);
 
int matrix[n][n];
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

    int symmetric = 1;

    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}

