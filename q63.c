#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6, 8};
    
    int size1 = sizeof(arr1) ;
    int size2 = sizeof(arr2) ;
    int size3 = size1 + size2;
    
    int arr3[size3];

    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }

    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
