#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);


    int matrix[rows][cols];


    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display sum of each row

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("%d ",rowSum);
    }
    printf("\n");

    // Calculate and display sum of each column

    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("%d ", colSum);
    }

    return 0;
}



