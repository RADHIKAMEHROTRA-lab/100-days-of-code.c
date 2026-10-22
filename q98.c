#include <stdio.h>

int main() {
    char name;
    int lastSpace = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    if (lastSpace == -1) {
        printf("%s\n", name);
    } else {
        int isFirst = 1;
        for (int i = 0; i < lastSpace; i++) {
            if (name[i] != ' ' && isFirst) {
                putchar(name[i]);
                printf(". ");
                isFirst = 0;
            } else if (name[i] == ' ') {
                isFirst = 1;
            }
        }
        for (int i = lastSpace + 1; name[i] != '\0'; i++) {
            putchar(name[i]);
        }
        printf("\n");
    }

    return 0;
}
