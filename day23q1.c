//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
