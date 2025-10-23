//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int num;
    int freq[10] = {0}; // To store frequency of digits 0–9
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count frequency of each digit
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with max frequency
    int maxFreq = 0, mostFreqDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", mostFreqDigit);
    return 0;
}

