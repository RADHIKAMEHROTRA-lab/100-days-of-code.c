#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int k = 0; k < rows + cols - 1; k++) {
        int start_row = (k < cols) ? 0 : k - cols + 1;
        int start_col = (k < cols) ? k : cols - 1;

        while (start_row < rows && start_col >= 0) {
            printf("%d ", matrix[start_row][start_col]);
            start_row++;
            start_col--;
        }
    }
    printf("\n");

    return 0;
}
