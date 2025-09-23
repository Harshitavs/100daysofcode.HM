//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main (){
int numb;
printf("enter integer number");
scanf("%d" , &numb );
if (numb<=0) {
 if ( numb==0)
{
printf("the number is negative.\n");
}
else  
printf("the number is zero.\n");
}
else (numb>=0);
{
printf("the number is positive.\n");
}
return 0;
}

