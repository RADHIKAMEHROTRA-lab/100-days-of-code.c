#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
    
    int vowels = 0, consonants = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    
    printf("%d %d\n", vowels, consonants);
    return 0;
}
