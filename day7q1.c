//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main () {
int year;
printf("Enter a year :");
scanf("%d",&year);
if
(year%4==0)
{
printf("the year is leap year");
}
else
{
printf("the year is not leap year");
}
return 0;
}
