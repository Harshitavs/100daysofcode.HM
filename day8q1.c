//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main () {
char ch;
printf("Enter a single character here:\n");
scanf ("%c",&ch);
if 
(ch>='A'&&ch<='Z')
{
printf("the character is upper case alphabet.\n");
}
else if (ch>='a'&&ch<='z')
{
printf("the character is lower case alphabet.\n");
}
else if (ch>='0' && ch<='9')
{
printf ("the charcter is a digit.\n");
}
else{
printf("the character is a special digit");
}
return 0;
}
