//Q8: Write a program to find and display the sum of the first n natural number.
#include<stdio.h>
int main (){
int n, sum;
printf("Enter a number(n):");
scanf("%d" , &n);
sum=n*(n+1)/2;
printf("sum=%d/n", sum);
return 0;
}
