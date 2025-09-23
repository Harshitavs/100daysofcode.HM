//Q30: Write a program to reverse a given number.
#include <stdio.h>
int main() {
int num, rev = 0;
printf("Enter a number: ");
scanf("%d", &num);
while (num> 0) {
rev = rev * 10 + (num % 10);
num /= 10;
 }
 printf("%d\n", rev);
 return 0;
}
