#include <stdio.h>
#include <stdbool.h>

bool isToeplitzMatrix(int matrix[][4], int rows, int cols) {

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] != matrix[i - 1][j - 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2}
    };

    int rows = 3;
    int cols = 4;

    if (isToeplitzMatrix(matrix, rows, cols)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
