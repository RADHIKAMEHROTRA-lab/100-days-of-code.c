#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    
    return 0;
}
