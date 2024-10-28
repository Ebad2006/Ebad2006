#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE];
    int i, j, k;
    int saddle_point_found = 0;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < SIZE; i++) {
        int row_min = matrix[i][0];
        int col_index = 0;

        for (j = 1; j < SIZE; j++) {
            if (matrix[i][j] < row_min) {
                row_min = matrix[i][j];
                col_index = j;
            }
        }

        // Check if row_min is the largest in its column
        int is_saddle_point = 1;
        for (k = 0; k < SIZE; k++) {
            if (matrix[k][col_index] > row_min) {
                is_saddle_point = 0;
                break;
            }
        }

        if (is_saddle_point) {
            printf("Saddle point found at position [%d][%d] with value %d\n", i, col_index, row_min);
            saddle_point_found = 1;
        }
    }

    if (!saddle_point_found) {
        printf("No saddle point found in the matrix.\n");
    }

    return 0;
}
