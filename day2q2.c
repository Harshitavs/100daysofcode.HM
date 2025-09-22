//Q4: Write a program to calculate the area and circumference of a circle given its radius
#include <stdio.h>
int main(){
float pi= 3.14;
float r,circ ,Area;
printf("Enter radius of circle:");
scanf("%f" ,&r);
circ= 2*pi* r;
Area=pi* r * r;
printf("circ=%f,Area=%f" , circ , Area);
return 0;
}
