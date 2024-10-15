#include <stdio.h>

/**
* Function to display a matrix.
 */
void displayMatrix(int h, int l, int m[h][l]);

/**
* Function to calculate and display the sum of the elements in each column of the matrix.
 */
void sum(int h, int l, int m[h][l], int columnSumNumbers[l]);

int main(void) {
    int h;
    int l;

    // Get the size of the matrix from the user
    printf("Please enter the dimensions of the matrix:\n");
    printf("Enter the number of rows (h): ");
    scanf("%d", &h);
    printf("Enter the number of columns (l): ");
    scanf("%d", &l);

    // Input the matrix elements
    int m[h][l];
    printf("Please enter the elements of the matrix:\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // Display the matrix
    printf("The matrix is:\n");
    displayMatrix(h, l, m);

    // Calculate and display the sum of the elements in each column
    int columnSumNumbers[l];
    sum(h, l, m, columnSumNumbers);

    printf("The sum of the elements in each column:\n");
    for (int i = 0; i < l; i++) {
        printf("%d \n", columnSumNumbers[i]);
    }
    return 0;
}

/**
 * Function to display the matrix.
 */
void displayMatrix(int h, int l, int m[h][l]) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

/**
 * Function to calculate the sum of each column.
 */
void sum(int h, int l, int m[h][l], int columnSumNumbers[l]) {
    for (int j = 0; j < l; j++) {
        int columnSum = 0;
        for (int i = 0; i < h; i++) {
            columnSum = columnSum + m[i][j];
        }
        columnSumNumbers[j] = columnSum;
    }
}
