//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include<math.h>
int main() {
int num, firstDigit, lastDigit, digits, swappedNum;
printf("Enter a number: ");
scanf("%d", &num);
digits = (int)log10(num);
  firstDigit = num / pow(10, digits);
  lastDigit = num % 10;
    if (digits == 0) {
        printf("%d", num);
        return 0;
    }
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;
    swappedNum = lastDigit * pow(10, digits) + middle * 10 + firstDigit;
    printf("Swapped number: %d", swappedNum);
    return 0;
}
