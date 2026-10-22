#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    
    int spaces = 0, digits = 0, special = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            special++;
        }
        i++;
    }
    
    printf("%d %d %d\n", spaces, digits, special);
    return 0;
}
