//Q73: Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main() {
int rows, colmn;
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows, &colmn);
int matrix[rows][colmn], rowSum[rows];
printf("Enter elements of the matrix:\n");
 for (int i = 0; i < rows; i++) 
{
 rowSum[i] = 0;
     for (int j = 0; j < colmn; j++) 
     {
     scanf("%d", &matrix[i][j]);
     rowSum[i] += matrix[i][j];
     }
}
printf("Sum of each row: ");
 for (int i = 0; i < rows; i++) {
printf("%d ", rowSum[i]);
 }
 return 0;
 }
