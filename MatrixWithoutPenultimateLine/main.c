#include <stdio.h>

/**
 * Ask the user to enter the size of the matrix.
 * Display the original matrix
 * Display the matrix without penultimate row and penultimate column
 */

void displayMatrix(int h, int l, int m[h][l]);

void displayMatrixWihoutPenultimateRowColumn(int h, int l, int m[h][l]);

int main(void) {
    int h;
    int l;

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

    printf("The matrix without penultimate row and penultimate column: \n");
    displayMatrixWihoutPenultimateRowColumn(h, l, m);
}

void displayMatrix(int h, int l, int m[h][l]) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void displayMatrixWihoutPenultimateRowColumn(int h, int l, int m[h][l]) {
    for (int i = 0; i < h; i++) {
        if (i != h - 2) {
            for (int j = 0; j < l; j++) {
                if (j != l - 2) {
                    printf("%d ", m[i][j]);
                }
            }
        }
        printf("\n");
    }
}
