//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
int a,b,c;
printf("Enter first side (a):");
scanf("%d",&a);
printf("Enter second side  (b):");
scanf("%d" , &b);
printf("Enter third side  (c):");
scanf("%d",&c);

if 
((a+b>c && a+c>b && c+b>a ))
{ 
printf("The triangle is valid \n");

if  ((a==b && b==c))
{
printf("It is an equilateral triangle.\n");
}
else if ((a==b || b==c || c==a))
{ 
printf(" It is an isosceles triangle.\n");
}
else if (( a*a + b*b == c*c) || ( a*a + c*c == b*b ) ||(c*c + b*b == a*a))
{
printf(" It is a right angled triangle .\n");
}
else {
printf("It is a scalene triangle.\n");
}
}
return 0;
}
