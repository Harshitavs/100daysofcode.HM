//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
int a, b , sum ,diff ,product, Quoteint;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
sum=a+b , diff =a-b , product= a*b;
 printf("Sum=%d, Diff=%d, Product=%d, ", a + b, a - b, a * b);
 printf("Quotient=%d\n", a / b);
if
("b"==0){
  printf("Quotient=Undefined");
}
    return 0;
}
