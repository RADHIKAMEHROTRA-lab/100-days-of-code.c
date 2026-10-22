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

    int distinct = 1;
 int limit = 0 ;   

    for (int i = 0; i < limit; i++) {
        for (int j = i + 1; j < limit; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct) {
        printf("Distinct\n");
    } else {
        printf("Not Distinct\n");
    }

    return 0;
}
