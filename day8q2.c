//Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main() {
int number1,number2,number3;
printf("Enter three numbers:");
scanf("%d%d%d",&number1,&number2,&number3);

if (number1 >= number2 && number1 >= number3)
{
printf("The greatest number is:%d\n",number1);
}
else if (number2 >= number1 && number2 >= number3)
{
printf("The greatest number is:%d\n",number2);
}
else {
printf("The grestest number is:%d\n",number3);
}
return 0;
} 

