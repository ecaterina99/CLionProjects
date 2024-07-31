#include <stdio.h>

int main(void) {
    int h;
    int l;

    // The matrix size

    printf("Please enter++ the matrix size: \n");
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
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    // The second matrix size

    int h2;
    int l2;

    printf("Please enter the second matrix size: \n");
    printf("Please enter h2: \n");
    scanf("%d", &h2);

    printf("Please enter l2: \n");
    scanf("%d", &l2);

    int m2[h2][l2];
    printf("Please enter the number: \n");

    for (int i = 0; i < h2; i++) {
        for (int j = 0; j < l2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    for (int i = 0; i < h2; i++) {
        for (int j = 0; j < l2; j++) {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    // The sum of 2 matrices

    int newMatrix[h][l];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (h == h2 && l == l2) {
                newMatrix[i][j] = m[i][j] + m2[i][j];
            } else {
                return 1;
            }
        }
    }
    printf("The sum of two matrices: \n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", newMatrix[i][j]);
        }
        printf("\n");
    }

    // The product of two matrices numbers

    int productMatrix[h][l];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l2; j++) {
            productMatrix[i][j] = 0;
            for (int q = 0; q < h2; q++) {
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
