//Q79: Perform diagonal traversal of a matrix
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
   printf("Diagonal traversal:\n");
    // Traverse upper half (including main diagonal)
    for (int k = 0; k < cols; k++) {
        int i = 0, j = k;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    // Traverse lower half
    for (int k = 1; k < rows; k++) {
        int i = k, j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
        i++;
          j--;
   }
    }
    printf("\n");
    return 0;
}
