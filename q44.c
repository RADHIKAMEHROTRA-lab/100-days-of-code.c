#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1) {
        sum += 1.0;
    }

    for (int i = 2; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series: %lf\n", sum);

    return 0;
}
