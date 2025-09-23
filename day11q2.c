//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
 float cp, sp;
 float profitOrLossAmount;
 float percent;
    printf("Enter the cost price(cp): ");
    scanf("%f", &cp);
    printf("Enter the selling price(sp): ");
    scanf("%f", &sp);
    profitOrLossAmount = sp - cp;
    if (profitOrLossAmount > 0) {
        percent= (profitOrLossAmount / cp) * 100;
        printf("Profit: %.2f\n", profitOrLossAmount);
        printf("Profit Percent: %.2f%%\n", percent);
    } else if (profitOrLossAmount < 0) {
        profitOrLossAmount = -profitOrLossAmount; 
// loss amount cant be negative.
        percent = (profitOrLossAmount / cp) * 100;
        printf("Loss: %.2f\n", profitOrLossAmount);
        printf("Loss percent: %.2f%%\n", percent);
    } else {
 
        printf("No profit, no loss.\n");
    }

    return 0;
}
