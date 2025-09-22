//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main (){
int l,b,Area ,Peri;
printf("Enter lenght and breadth of rectangle:(l,b)");
scanf("%d%d",&l,&b);
Area=l*b;
Peri= 2*(l+b);
printf("Area=%d,Peri=%d" , Area,Peri);
return 0;
}
