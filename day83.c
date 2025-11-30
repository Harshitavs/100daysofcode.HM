//Q133: Create an enum for months and print how many days each month has.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
enum MONTH{JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};


void to_upper(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
        }
        
int main() {
char m[10];
enum MONTH month;
printf("Enter the month you want to check no of days for:");  
scanf("%s", m);
to_upper(m);  // make input uppercase for case-insensitive comparison
if (strcmp(m, "JAN")==0) month = JAN;
else if(strcmp(m, "FEB")==0) month = FEB;
else if(strcmp(m, "MAR")==0) month = MAR;
else if(strcmp(m, "APR")==0) month = APR;
else if(strcmp(m, "MAY")==0) month = MAY;
else if(strcmp(m, "JUN")==0) month = JUN;
else if(strcmp(m, "JUL")==0) month = JUL;
else if(strcmp(m, "AUG")==0) month = AUG;
else if(strcmp(m, "SEP")==0) month = SEP;
else if(strcmp(m, "OCT")==0) month = OCT;
else if(strcmp(m, "NOV")==0) month = NOV;
else month = DEC;

switch(month) {
case JAN:
case MAR:
case MAY:
case JUL:
case AUG:
case OCT:
case DEC:
printf("31 days");
break ;
case FEB:
printf("28 or 29 days");
break;
default :
printf("30 days");
}
return 0;
}
