#include<stdio.h>
int main () {
 int a,e,i,o,u;
char character ;
printf ("Enter a character");
scanf("%c",&character);
if
(character>='A'&& character<='Z')
{
character= character+('a'-'A');
}
if
(character=='a'||character=='e'||character=='i'||character=='o'||character=='u' )
{
printf("The character entered is a vowel");
}
else if
(( character>='a' && character<='z'))
{
printf("The character is consonant.\n");
}
else
{
printf("The character is invalid");
}
return 0;
}
