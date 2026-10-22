#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') {
            str1[len1] = '\0';
            break;
        }
        len1++;
    }

    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') {
            str2[len2] = '\0';
            break;
        }
        len2++;
    }

    if (len1 != len2) {
        printf("Not a rotation.\n");
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            isRotation = 1;
            break;
        }
    }

    if (isRotation) {
        printf("String is a rotation of another.\n");
    } else {
        printf("Not a rotation.\n");
    }

    return 0;
}
