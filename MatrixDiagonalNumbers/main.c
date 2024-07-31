#include <stdio.h>

void displayMatrix(int h, int l, int m[h][l]);

void displaySumOfNumbersUnderDiagonal(int h, int l, int m[h][l]);

void displaySumOfNumbersBelowDiagonal(int h, int l, int m[h][l]);

int main() {
    int h;
    int l;

    // The matrix size

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

    displaySumOfNumbersUnderDiagonal(h, l, m);

    displaySumOfNumbersBelowDiagonal(h, l, m);
}

    void displayMatrix(int h, int l, int m[h][l]) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < l; j++) {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }


    void displaySumOfNumbersUnderDiagonal(int h, int l, int m[h][l]) {
        //Numbers under the diagonal of matrix:
        int sumNumbersUnderDiagonal = 0;
        printf("Numbers under the diagonal: ");
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < l; j++) {
                if (i < j) {
                    sumNumbersUnderDiagonal += m[i][j];
                    printf("%d ", m[i][j]);
                }
            }
        }
        printf("\n");
        printf("the sum of numbers under the diagonal: ");
        printf("%d ", sumNumbersUnderDiagonal);
        printf("\n");
    }

    void displaySumOfNumbersBelowDiagonal(int h, int l, int m[h][l]) {
        //Numbers below the diagonal of matrix:
        int sumOfNumbersBelowDiagonal = 0;
        printf("Numbers below the diagonal: ");
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < l; j++) {
                if (i > j) {
                    sumOfNumbersBelowDiagonal += m[i][j];
                    printf("%d ", m[i][j]);
                }
            }
        }
        printf("\n");
        printf("the sum of numbers below the diagonal: ");
        printf("%d ", sumOfNumbersBelowDiagonal);
        printf("\n");
    }

