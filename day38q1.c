//Q75: Add two matrices.
#include <stdio.h>
int main() {
int rows, cols;
 printf("Enter number of rows and columns: ");
 scanf("%d %d", &rows, &cols);

  int A[rows][cols], B[rows][cols], sum[rows][cols];

  printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Add matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {    
   printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
   
        


   

  
