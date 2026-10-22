#include <stdio.h>

int main() {
    char name;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int isFirst = 1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            break;
        }
        if (name[i] != ' ' && isFirst) {
            putchar(name[i]);
            isFirst = 0;
        } else if (name[i] == ' ') {
            isFirst = 1;
        }
    }
    printf("\n");

    return 0;
}
