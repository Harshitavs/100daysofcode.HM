//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main (){
float c,fahern;
printf("Enter temperature in c:");
scanf(" %f",&c);
fahern=(c *9/5)+32;
printf("fahern= %f" ,fahern);
return 0;
}
