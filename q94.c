#include <stdio.h>

int main() {
    char str[200];
    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (currLen == 0) {
                currStart = i;
            }
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = currStart;
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
