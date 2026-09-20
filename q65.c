#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int size = sizeof(arr) / sizeof(arr);
    int target = 23;
    
    int low = 0;
    int high = size - 1;
    int found_index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            found_index = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found_index != -1) {
        printf("Element found at index: %d\n", found_index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
