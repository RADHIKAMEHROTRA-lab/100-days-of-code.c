#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i;
        double denominator = 4 * i - 1;
        sum += numerator / denominator;
    }

    printf("Sum of the series: %lf\n", sum);

    return 0;
}
