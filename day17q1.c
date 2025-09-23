//Q33: Write a program to check if a number is an Armstrong  number.
// to run gcc day17q1.c -o day17q1 -lm
//./day17q1
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, sum = 0, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    temp = num;
    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    // Calculate sum of digits raised to power of number of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}

