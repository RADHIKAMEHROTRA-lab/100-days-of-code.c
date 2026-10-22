#include <stdio.h>

int main() {
    char str[1000];
    int count[26] = {0};
    char found = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            count[index]++;
            
            if (count[index] == 2) {
                found = str[i];
                break;
            }
        }
    }

    if (found != '\0') {
        printf("First repeating lowercase alphabet is: '%c'\n", found);
    } else {
        printf("No repeating lowercase alphabets found.\n");
    }

    return 0;
}
