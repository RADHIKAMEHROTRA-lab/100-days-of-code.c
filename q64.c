#include <stdio.h>

int main() {
    long long num = 12233344;
    int frequency[10] = {0};
    
    if (num < 0) {
        num = -num;
    }
    
    if (num == 0) {
        frequency[0] = 1;
    }

    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    int max_digit = 0;
    int max_count = frequency[0];

    for (int i = 1; i < 10; i++) {
        if (frequency[i] > max_count) {
            max_count = frequency[i];
            max_digit = i;
        }
    }

    printf("Most frequent digit: %d\n", max_digit);

    return 0;
}
