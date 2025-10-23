/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main() {
    int i, j, space;

    // Upper half (1 to 5 rows)
    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (4 to 1 rows)
    for (i = 4; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

