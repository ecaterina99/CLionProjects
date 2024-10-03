#include <stdio.h>

/**
 * Ask the user to enter the size of the matrix.
 * Display the matrix.
 * Display the number of odd numbers in the matrix.
 * Display the number of even numbers in the matrix.
 * Display the number of zeros numbers in the matrix.
 */
void displayMatrix(int h, int l, int m[h][l]);

void displayMatrixProperties(int h, int l, int m[h][l]);

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
    displayMatrixProperties(h, l, m);
}

void displayMatrix(int h, int l, int m[h][l]) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

void displayMatrixProperties(int h, int l, int m[h][l]) {
    int cntOdd = 0;
    int cntEven = 0;
    int cntZero = 0;
    //Odd Numbers:
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (m[i][j] % 2 != 0) {
                cntOdd++;
            } else {
                cntEven++;
            }
            if (m[i][j] == 0) {
                cntZero++;
            }
        }
    }
    printf("Odd numbers: %d ", cntOdd);
    printf("\n");
    printf("Even numbers: %d ", cntEven);
    printf("\n");
    printf("Zero numbers: %d ", cntZero);
}
