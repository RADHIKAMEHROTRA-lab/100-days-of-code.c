#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}
