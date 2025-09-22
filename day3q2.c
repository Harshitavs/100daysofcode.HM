//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(){
 int a, b,variable;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
  variable = a;
  a = b;
  b = variable;
 printf("After swap: %d %d\n", a, b);
    return 0;
}

