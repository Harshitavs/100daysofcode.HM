//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, digit, product = 1;
    int Odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            Odd = 1;
        }
       num /= 10;
    }
    if (!Odd) {
        product = 1;
    }
    printf("Product of odd digits: %d\n", product);
    return 0;
}
