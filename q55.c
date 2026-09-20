#include <stdio.h>

int main() {
    int n;

int i;
int j;
int isPrime;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; 

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
