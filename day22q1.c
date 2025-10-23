//Q43: Write a program to check if a number is a strong number (using fxns)
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int main() {
    int num, original, sum = 0;
    printf("Enter the number you wnt to check for:");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}
