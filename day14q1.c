//Q27: Write a program to print the sum of the first n odd numbers
#include <stdio.h>
int main() {
 int n, sum = 0, i = 0, j = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    while (i < n) {
        sum += j;
        j += 2;
        i++;
  }
    printf("%d\n", sum);
   return 0;
}


