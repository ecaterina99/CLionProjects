#include <stdio.h>

/**
 * Ask the user to enter the size of the first matrix.
 * Display the first matrix
 * Ask the user to enter the size of the second matrix, its height and width must be equal to the first matrix.
 * Display the second matrix.
 * Calculate and display the sum of the two matrices.
 * Calculate and display the product of the two matrices.
 */
void displayMatrix(int h, int l, int m[h][l]);

void displaySumOfTwoMatrices(int h, int l, int m[h][l], int m2[h][l]);

void displayProductOfTwoMatrices(int h, int l, int m[h][l], int m2[h][l]);

int main(void) {
    int h;
    int l;

    // The first matrix size

    printf("Please enter the matrix size: \n");
    printf("Please enter h: \n");
    scanf("%d", &h);

    printf("Please enter l: \n");
    scanf("%d", &l);

    int m[h][l];
    printf("Please enter the number: \n");

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    displayMatrix(h, l, m);

    // The second matrix size

    int h2;
    int l2;

    printf("Please enter the second matrix size: \n");
    printf("Please enter h2 (h2 must be equal to h) : \n");
    scanf("%d", &h2);
    while (h != h2) {
        printf("( h2 must be equal to h! Please enter h2 again  ): \n");
        scanf("%d", &h2);
    }

    printf("Please enter l2 (l2 must be equal to l) : \n");
    scanf("%d", &l2);
    while (l != l2) {
        printf("( l2 must be equal to l! Please enter l2 again  ): \n");
        scanf("%d", &l2);
    }

    int m2[h2][l2];
    printf("Please enter the number: \n");

    for (int i = 0; i < h2; i++) {
        for (int j = 0; j < l2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    displayMatrix(h2, l2, m2);

    displaySumOfTwoMatrices(h, l, m, m2);

    displayProductOfTwoMatrices(h, l, m, m2);
}


void displayMatrix(int h, int l, int m[h][l]) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}


void displaySumOfTwoMatrices(int h, int l, int m[h][l], int m2[h][l]) {
    int newMatrix[h][l];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            newMatrix[i][j] = m[i][j] + m2[i][j];
        }
    }

    printf("The sum of two matrices: \n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", newMatrix[i][j]);
        }
        printf("\n");
    }
}

void displayProductOfTwoMatrices(int h, int l, int m[h][l], int m2[h][l]) {
    int productMatrix[h][l];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            productMatrix[i][j] = 0;
            for (int q = 0; q < h; q++) {
                productMatrix[i][j] = productMatrix[i][j] + m[i][q] * m2[q][j];
            }
        }
    }

    printf("The product of two matrices: \n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", productMatrix[i][j]);
        }
        printf("\n");
    }
}


