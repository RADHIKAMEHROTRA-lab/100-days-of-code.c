#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, result = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += factorial(remainder);
        originalNum /= 10;
    }
    
    if (result == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);
        
    return 0;
}
