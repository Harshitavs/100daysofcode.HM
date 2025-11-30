//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char s[20];
    enum Status st;
    printf("Enter statement : success , failure , timeout");
    scanf("%s", s);

    if (strcmp(s, "SUCCESS") == 0)
        st = SUCCESS;
    else if (strcmp(s, "FAILURE") == 0)
        st = FAILURE;
    else
        st = TIMEOUT;

    if (st == SUCCESS)
        printf("Operation successful");
    else if (st == FAILURE)
        printf("Operation failed");
    else
        printf("Operation timed out");

    return 0;
}
