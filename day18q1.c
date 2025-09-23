//Q35: Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
    int number;
    int i;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Factors of %d are: ", number);
    for (i = 1; i <= number; ++i) {
        // Check if 'i' divides 'number' evenly
        if (number % i ==0 ) {
        printf("%d ", i);
        }
    }
   printf("\n");

return 0;
}
