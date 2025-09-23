//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int a, b, i, gcd;
    printf("Enter First integer: ");
    scanf("%d", &a);
    printf("Enter Second integer: ");
    scanf("%d", &b);
  for(i=1; i <= a && i <= b; ++i)
    {
       // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", a, b, gcd);
    return 0;
}
