#include <stdio.h>

/**
* Function to display a matrix
 */
void displayMatrix(int h, int l, int m[h][l]);

/**
Function to calculate the sum of two matrices
 */
void sumOfTwoMatrices(int h, int l, int m[h][l], int m2[h][l], int newMatrix[h][l]);

int main(void) {
    int h;
    int l;

    // Get the size of the matrices from the user
    printf("Please enter the dimensions of the matrices:\n");
    printf("Enter the number of rows (h): ");
    scanf("%d", &h);
    printf("Enter the number of columns (l): ");
    scanf("%d", &l);

    // First matrix
    int m[h][l];
    printf("Please enter the numbers for the first matrix:\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    // Display the first matrix
    displayMatrix(h, l, m);

    // Second matrix
    int m2[h][l];
    printf("Please enter the numbers for the second matrix:\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    // Display the second matrix
    printf("Second matrix:\n");
    displayMatrix(h, l, m2);

    // Sum the two matrices
    int newMatrix[h][l];
    sumOfTwoMatrices(h, l, m, m2, newMatrix);

    // Display the resulting
    printf("The sum of two matrices: \n");
    displayMatrix(h, l, newMatrix);

    return 0;
}

/**
 * Function to display a matrix
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
 * Function to calculate the sum of two matrices
 */
void sumOfTwoMatrices(int h, int l, int m[h][l], int m2[h][l], int newMatrix[h][l]) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            newMatrix[i][j] = m[i][j] + m2[i][j];
        }
    }
}
