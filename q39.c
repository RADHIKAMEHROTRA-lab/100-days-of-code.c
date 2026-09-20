       #include <stdio.h>

int main() {
    int num;
     int rem;
    int product = 1;
    int has_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        rem = num % 10;
        if (rem % 2 != 0) {
            product *= rem;
            has_odd = 1;
        }
        num /= 10;
    }

    if (has_odd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
