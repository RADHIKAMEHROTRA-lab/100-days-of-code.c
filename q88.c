#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
    
    printf("%s\n", str);
    return 0;
}
