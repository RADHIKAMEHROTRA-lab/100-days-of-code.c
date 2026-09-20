#include <stdio.h>

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int size = 5;
    int element = 25;
    int position = 2;

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    size++;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
