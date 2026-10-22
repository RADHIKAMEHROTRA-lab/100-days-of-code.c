#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n') {
            count[(unsigned char)str1[i]]++;
        }
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n') {
            count[(unsigned char)str2[i]]--;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Strings are anagrams.\n");
    } else {
        printf("Strings are not anagrams.\n");
    }

    return 0;
}
