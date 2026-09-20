#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int found_even = 0;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product = product * i;
            found_even = 1;
        }
    }
    
    if (found_even) {
        printf("Product: %lld\n", product);
    } else {
        printf("No even numbers found\n");
    }
    
    return 0;
}
