//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
int number;
long long factorial = 1; 
int i;
printf("Enter a non-negative integer: ");
scanf("%d", &number);
if (number < 0) {
printf("Factorial is not defined for negative numbers.\n");
} else if (number == 0) {
printf("Factorial of 0 is 1.\n");
}
else {
for (i = 1; i <= number; i++)
factorial *= i;
{
printf("Factorial of %d = %lld\n", number, factorial);
}
}
  return 0;
}
