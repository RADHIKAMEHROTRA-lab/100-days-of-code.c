#include <stdio.h>
#include <math.h>

int main() {
    int num;
int last;
int first;
int digits;
int swapped;


    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);
    first = num / pow(10, digits);

    swapped = last * pow(10, digits);
    swapped += num % (int)pow(10, digits);
    swapped -= last;
    swapped += first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}
