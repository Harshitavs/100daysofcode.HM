/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>
int main() {
    int dayslate;
    float fine = 0.0;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &dayslate);
    if (dayslate <= 0) {
        printf("No fine. Book returned on time or early.\n");
    } else if (dayslate <= 5) {
        fine = dayslate * 2.0;
        printf("Fine: ₹%.2f\n", fine);
    } else if (dayslate <= 10) { 
        fine = (5 * 2.0) + ((dayslate - 5) * 4.0);
        printf("Fine: ₹%.2f\n", fine);
    } else if (dayslate <= 30) { // Days 11-30
        fine = (5 * 2.0) + (5 * 4.0) + ((dayslate - 10) * 6.0);
        printf("Fine: ₹%.2f\n", fine);
    } else { 
   printf("Membership Cancelled due to excessive late return.\n");
    }
    return 0;
}

