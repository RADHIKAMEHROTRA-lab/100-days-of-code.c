#include <stdio.h>

int main() {
    int n, i, count = 0, sum = 0;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for (i = 1; count < n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
            count++;
        }
    }
    
    printf("Sum: %d\n", sum);
    
    return 0;
}
