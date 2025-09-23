//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main (){
int  totalsec,hrs,mins,sec;
printf("Enter time in seconds :");
scanf("%d" , &totalsec );

hrs= totalsec/3600;
totalsec %= 3600;
mins = totalsec / 60;
sec=  totalsec% 60;

printf("%d %d %d" , hrs , mins , sec);
return 0;
}








