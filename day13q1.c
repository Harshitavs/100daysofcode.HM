//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main (){
int x,y;
char operations;
printf("Enter twonumbers and an operator(+,-,*,/,%%):");
scanf("%d %d %c",&x , &y , &operations);
switch (operations){
case ('*'):
printf("%d\n",x*y);
break;
case ('+'):
printf("%d\n",x+y);
break;
case ('-'):
printf("%d\n" , x-y);
break;
case ('/'):
if (y!=0)
printf("%d\n" ,x%y);
else
printf("error");
break;
case ('%'):
if (y!= 0)
printf("%d\n", x % y);
else
printf("Error: Modulo by zero\n");
break;
default:
printf("Invalid operator\n");
}
return 0;
}
