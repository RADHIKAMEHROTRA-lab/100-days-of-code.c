#include <stdio.h>

int main() {
    int arr[10] = {2, 5, 8, 12, 16, 23, 38};
    int size = 7;
    int element = 15;
    
    int i = size - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    arr[i + 1] = element;
    size++;

    for (int j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
