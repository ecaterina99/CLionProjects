#include <stdio.h>

int main(void) {
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
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    // The sum of the numbers
    int sum = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            sum = sum + m[i][j];
        }
    }
    printf("The sum of the numbers is: %d ", sum);
    printf("\n");

    // The sum of the diagonal numbers of the matrix
    int cnt = 0;
    int n = 50;
    int diagonal[n];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (i == j) {
                diagonal[cnt] = m[i][j];
                cnt++;
            }
        }
    }
    int sumDiagonalNumbers = 0;
    printf("Diagonal numbers: \n");
    for (int z = 0; z < cnt; z++) {
        printf("%d ", diagonal[z]);
        sumDiagonalNumbers = sumDiagonalNumbers + diagonal[z];
    }
    printf("\n");
    printf("The sum of diagonal numbers is: %d ", sumDiagonalNumbers);
    printf("\n");

    // The product of the secondary diagonal numbers of the matrix

    cnt = 0;
    int q = 50;
    int SecondaryDiagonal[q];
    int product = 0;
    for (int i = 0; i < h; i++) {
        SecondaryDiagonal[cnt] = m[i][l - 1 - i];
        cnt++;
    }

    printf("Secondary Diagonal numers: \n");
    for (int i = 0; i < cnt; i++) {
        printf("%d ", SecondaryDiagonal[i]);
    }
    printf("\n");

    product = m[0][l - 1];
    for (int i = 1; i < cnt; i++) {
        product = product * m[i][l - 1 - i];
    }
    printf("The product of diagonal numbers is: %d ", product);

    // The sum of the each row numbers of the matrix

    int sumRowNumbersArray[h];

    for (int i = 0; i < h; i++) {
        int rowSum = 0;
        for (int j = 0; j < l; j++) {
            rowSum = rowSum + m[i][j];
            sumRowNumbersArray[i] = rowSum;
        }
        printf("\n");
    }
    printf("The sum of the row numbers of the matrix: \n");
    for (int i = 0; i < h; i++) {
        printf("%d \n", sumRowNumbersArray[i]);
    }

    // The sum of the each column numbers of the matrix

    int sumColumnNumbersArray[l];
    for (int j = 0; j < l; j++) {
        int columnSum = 0;
        for (int i = 0; i < h; i++) {
            columnSum = columnSum + m[i][j];
            sumColumnNumbersArray[j] = columnSum;
        }
    }
    printf("The sum of the each column numbers of the matrix: \n");
    for (int i = 0; i < h; i++) {
        printf("%d \n", sumColumnNumbersArray[i]);
    }

    // The transpose of the matrix
    printf("\n");
    printf("The transpose of the matrix: \n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < h; j++) {
            printf("%d ", m[j][i]);
        }
        printf("\n");
    }
}
