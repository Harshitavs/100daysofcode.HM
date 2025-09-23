//Q17: Write a program to find the roots of a quadratic equation and categorize them.
//to compile remember to use gcc day9q1.c -o day9q1- lm
#include <stdio.h>
#include<math.h>
int main() {
float a,b,c;
float disc ,r1,r2;
printf("Enter the coefficients of a,b,c");
scanf("%f%f%f",&a ,&b,&c);
if (a==0)
{
printf("Not a quadractic equation.\n");
return 0;
}
disc=(b*b)-(4*a*c);
printf("disc= %.2f\n" ,disc);
if (disc>0){
r1=(-b+sqrt(disc))/(2*a);
r2=(-b-sqrt(disc))/(2*a);
printf("Roots are real and disctinct.\n");
printf("r1=%.2f\n",r1);
printf("r2=%.2f\n",r2);
}
else if (disc == 0){
 r1 = -b / (2 * a);
printf("Roots are real and same: %.2f\n", r1);
}
else{
 printf("Roots are complex\n");
  }

return 0;
}
