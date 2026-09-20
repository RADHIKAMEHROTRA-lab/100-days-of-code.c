#include <stdio.h>

int main() {
    int arr[] = {24, 5, 89, 43, 7, 12};
    int size = sizeof(arr) ;
    int search_key = 43;
    int found_index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == search_key) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Element found at index: %d\n", found_index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
