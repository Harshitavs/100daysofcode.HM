//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum { RED, YELLOW, GREEN } sign;

void to_upper(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
}

int main() {
    char signs[10];
    int check = -1;

    printf("Enter either RED, YELLOW or GREEN:\n");
    fgets(signs, sizeof(signs), stdin);
    signs[strcspn(signs, "\n")] = '\0';

    to_upper(signs);  // Convert input to uppercase

    if (strcmp(signs, "RED") == 0) {
        check = RED;
    } else if (strcmp(signs, "YELLOW") == 0) {
        check = YELLOW;
    } else if (strcmp(signs, "GREEN") == 0) {
        check = GREEN;
    }

    switch (check) {
        case RED:
            printf("STOP!\n");
            break;
        case YELLOW:
            printf("WAIT\n");
            break;
        case GREEN:
            printf("GO\n");
            break;
        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}



    
